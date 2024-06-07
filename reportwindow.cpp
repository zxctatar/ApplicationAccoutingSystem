#include "reportwindow.h"
#include "ui_reportwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>

ReportWindow::ReportWindow(const int& applicationID, QWidget *parent)
    : QMainWindow{parent}
    , ui(new Ui::ReportWindow)
{
    ui->setupUi(this);

    showReport(applicationID);
}

void ReportWindow::showReport(const int& applicationID){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("ShowReportConnection")){
            db = QSqlDatabase::database("ShowReportConnection");
            if(!db.open()){
                qDebug() << "Failed open database ShowReportConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "ShowReportConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database ShowReportConnection\n";
                return;
            }
        }

        QSqlQuery queryReportID(db);
        queryReportID.prepare("SELECT id_отчёта FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryReportID.bindValue(":applicationID", applicationID);

        if(!queryReportID.exec()){
            qDebug() << "Error queryReportID Report\n";
            db.close();
            return;
        }

        int reportID = -1;

        if(queryReportID.next()){
            reportID = queryReportID.value(0).toInt();
        }

        QSqlQuery queryReport(db);
        queryReport.prepare("SELECT Время_начала, Время_конца, Материалы, Стоимость, Причина_неисправности, Оказанная_помощь FROM Отчёт WHERE id_отчёта = :reportID");
        queryReport.bindValue(":reportID", reportID);

        if(!queryReport.exec()){
            qDebug() << "Error queryReport Report\n";
            db.close();
            return;
        }

        if(queryReport.next()){
            ui->label_dateStart_2->setText(queryReport.value(0).toString());
            ui->label_dateEnd_2->setText(queryReport.value(1).toString());
            ui->textBrowser_materials->setText(queryReport.value(2).toString());
            ui->label_price_2->setText(queryReport.value(3).toString());
            ui->textBrowser_causeOfMalfunction->setText(queryReport.value(4).toString());
            ui->textBrowser_assistanceProvided->setText(queryReport.value(5).toString());
        }

    }
    QSqlDatabase::removeDatabase("ShowReportConnection");
}

ReportWindow::~ReportWindow(){
    delete ui;
}

void ReportWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}

void ReportWindow::on_pushButton_close_clicked()
{
    this->close();
}

