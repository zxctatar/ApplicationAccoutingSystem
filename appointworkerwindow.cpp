#include "appointworkerwindow.h"
#include "ui_appointworkerwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>

AppointWorkerWindow::AppointWorkerWindow(const int& adminID, const int& applicationID, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AppointWorkerWindow)
    , applicationID(applicationID)
    , adminID(adminID)
{
    ui->setupUi(this);
    fillWorkers();
}

AppointWorkerWindow::~AppointWorkerWindow(){
    delete ui;
}

void AppointWorkerWindow::fillWorkers(){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("FillWorkerConnection")){
            db = QSqlDatabase::database("FillWorkerConnection");
            if(!db.open()){
                qDebug() << "Failed open database FillWorkerConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "FillWorkerConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database FillWorkerConnection\n";
                return;
            }
        }

        QString workers;

        QSqlQuery queryWorkers(db);
        queryWorkers.prepare("SELECT id_работника, Фамилия, Имя, Отчество FROM Работник");

        if(!queryWorkers.exec()){
            qDebug() << "Error queryWorkers AppointWorkerWindow\n";
            db.close();
            return;
        }

        while(queryWorkers.next()){
            workers = queryWorkers.value(0).toString() + ' ' + queryWorkers.value(1).toString() + ' ' + queryWorkers.value(2).toString() + ' ' + queryWorkers.value(3).toString();
            ui->comboBox->addItem(workers);
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("FillWorkerConnection");
}

void AppointWorkerWindow::on_pushButton_appoint_clicked()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("AppointWorkerConnection")){
            db = QSqlDatabase::database("AppointWorkerConnection");
            if(!db.open()){
                qDebug() << "Failed open database AppointWorkerConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "AppointWorkerConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database AppointWorkerConnection\n";
                return;
            }
        }

        QString employeeString = ui->comboBox->currentText();
        QStringList parts = employeeString.split(" ");
        QString id = parts.first();

        QSqlQuery query(db);
        query.prepare("UPDATE ЗаявкаНаРемонт SET id_администратора = :adminID, id_работника = :workerID, Статус_заявки = :status WHERE id_заявки = :applicationID");
        query.bindValue(":adminID", adminID);
        query.bindValue(":workerID", id);
        query.bindValue(":status", "В работе");
        query.bindValue(":applicationID", applicationID);

        if(!query.exec()){
            qDebug() << "Error query AppointWorker\n";
            db.close();
            return;
        }

        db.close();
        emit changeSave();
        this->close();
    }
    QSqlDatabase::removeDatabase("AppointWorkerConnection");
}

void AppointWorkerWindow::on_pushButton_close_clicked()
{
    this->close();
}

void AppointWorkerWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}
