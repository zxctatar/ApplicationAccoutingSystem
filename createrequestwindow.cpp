#include "createrequestwindow.h"
#include "ui_createrequestwindow.h"
#include <QSqlQuery>
#include <QDateTime>
#include <QMessageBox>

CreateRequestWindow::CreateRequestWindow(const QString& login, QWidget *parent)
    : QMainWindow(parent)
    , userLogin(login)
    , ui(new Ui::CreateRequestWindow)
{
    ui->setupUi(this);
}

CreateRequestWindow::~CreateRequestWindow(){
    delete ui;
}

void CreateRequestWindow::on_pushButton_close_clicked()
{
    this->close();
}

void CreateRequestWindow::on_pushButton_create_clicked()
{
    {
        if(ui->lineEdit_equipment->text().length() == 0){
            QMessageBox::warning(this, "Оборудования", "Введите названия оборудования");
            return;
        }
        if(ui->label_typeOfFault->text().length() == 0){
            QMessageBox::warning(this, "Тип неисправности", "Введите тип неисправности");
            return;
        }
        if(ui->textEdit_description->toPlainText().length() == 0){
            QMessageBox::warning(this, "Описание", "Введите описание");
            return;
        }

        QSqlDatabase db;
        if(QSqlDatabase::contains("createRequestConnection")){
            db = QSqlDatabase::database("createRequestConnection");
            if(!db.open()){
                qDebug() << "Failed open database createRequestConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "createRequestConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database createRequestConnection\n";
                return;
            }
        }

        QSqlQuery queryID(db);
        queryID.prepare("SELECT id_клиента FROM Клиент WHERE Логин = :login");
        queryID.bindValue(":login", userLogin);

        if(!queryID.exec()){
            qDebug() << "Error queryID/n";
            db.close();
            return;
        }

        int clientID = -1;
        if(queryID.next()){
            clientID = queryID.value(0).toInt();
        }

        QDateTime date = QDateTime::currentDateTime();

        QSqlQuery queryRequest(db);
        queryRequest.prepare("INSERT INTO ЗаявкаНаРемонт (id_клиента, Дата, Оборудование, Тип_неисправности, Описание_проблемы, Статус_заявки) "
                             "VALUES (:clientID, :date, :equipment, :typeOfFault, :description, :status);");
        queryRequest.bindValue(":clientID", clientID);
        queryRequest.bindValue(":date", date.toString(Qt::ISODate));
        queryRequest.bindValue(":equipment", ui->lineEdit_equipment->text());
        queryRequest.bindValue(":typeOfFault", ui->lineEdit_typeOfFault->text());
        queryRequest.bindValue(":description", ui->textEdit_description->toPlainText());
        queryRequest.bindValue(":status", "В ожидании");

        if(!queryRequest.exec()){
            qDebug() << "Error queryRequest\n";
            db.close();
            return;
        }

        db.close();
        emit needUpdate();
        this->close();
    }
    QSqlDatabase::removeDatabase("createRequestConnection");
}

void CreateRequestWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}

