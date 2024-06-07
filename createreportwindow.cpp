#include "createreportwindow.h"
#include "ui_createreportwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDate>
#include <QRegularExpressionValidator>
#include <QRegularExpression>

CreateReportWindow::CreateReportWindow(const int& applicationID, QWidget *parent)
    : QMainWindow{parent}
    , ui(new Ui::CreateReportWindow)
    , applicationID(applicationID)
{
    ui->setupUi(this);

    QRegularExpressionValidator* priceValidator = new QRegularExpressionValidator(QRegularExpression("^[0-9]*$"),this);
    ui->lineEdit_price->setValidator(priceValidator);
}

CreateReportWindow::~CreateReportWindow(){
    delete ui;
}

void CreateReportWindow::on_pushButton_close_clicked()
{
    this->close();
}

void CreateReportWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}

void CreateReportWindow::on_pushButton_done_clicked()
{
    if(ui->lineEdit_price->text().length() == 0){
        QMessageBox::warning(this, "Стоимость", "Введите стоимость");
        return;
    }
    if(ui->textEdit_materials->toPlainText().length() == 0){
        QMessageBox::warning(this, "Материалы", "Введите используемые материалы");
        return;
    }
    if(ui->textEdit_causeOfMalfunction->toPlainText().length() == 0){
        QMessageBox::warning(this, "Причина неисправности", "Введите причину неисправности");
        return;
    }
    if(ui->textEdit_assistanceProvided->toPlainText().length() == 0){
        QMessageBox::warning(this, "Оказанная помощь", "Введите оказанную помощь");
        return;
    }

    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("CreateReportConnection")){
            db = QSqlDatabase::database("CreateReportConnection");
            if(!db.open()){
                qDebug("Failed open database CreateReportConnection\n");
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "CreateReportConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database CreateReportConnection\n";
                return;
            }
        }

        QSqlQuery queryDate(db);
        queryDate.prepare("SELECT Дата FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryDate.bindValue(":applicationID", applicationID);

        if(!queryDate.exec()){
            qDebug() << "Error queryDate CreateReport\n";
            db.close();
            return;
        }

        QDate dateStart;
        QDate dateEnd = QDate::currentDate();

        if(queryDate.next()){
            dateStart = queryDate.value(0).toDate();
        }

        QSqlQuery queryReport(db);
        queryReport.prepare("INSERT INTO Отчёт (Время_начала, Время_конца, Материалы, Стоимость, Причина_неисправности, Оказанная_помощь)"
                            "VALUES (:dateStart, :dateEnd, :materials, :price, :causeOfMalfunction, :assistanceProvided)");
        queryReport.bindValue(":dateStart", dateStart);
        queryReport.bindValue(":dateEnd", dateEnd);
        queryReport.bindValue(":materials", ui->textEdit_materials->toPlainText());
        queryReport.bindValue(":price", ui->lineEdit_price->text());
        queryReport.bindValue(":causeOfMalfunction", ui->textEdit_causeOfMalfunction->toPlainText());
        queryReport.bindValue(":assistanceProvided", ui->textEdit_assistanceProvided->toPlainText());

        if(!queryReport.exec()){
            qDebug() << "Error queryReport CreateReport\n";
            db.close();
            return;
        }

        int reportID = queryReport.lastInsertId().toInt();

        QSqlQuery queryUpdateApplication(db);
        queryUpdateApplication.prepare("UPDATE ЗаявкаНаРемонт SET id_отчёта = :reportID, Статус_заявки = :status WHERE id_заявки = :applicationID");
        queryUpdateApplication.bindValue(":reportID", reportID);
        queryUpdateApplication.bindValue(":status", "Выполнено");
        queryUpdateApplication.bindValue(":applicationID", applicationID);

        if(!queryUpdateApplication.exec()){
            qDebug() << "Error queryUpdateApplication CreateReport\n";
            db.close();
            return;
        }

        this->close();
        emit needUpdate();
        emit windowClosed();
    }
    QSqlDatabase::removeDatabase("CreateReportConnection");
}

