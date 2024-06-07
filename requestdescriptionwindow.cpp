#include "requestdescriptionwindow.h"
#include "ui_requestdescriptionwindow.h"
#include "reportwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>

RequestDescriptionWindow::RequestDescriptionWindow(const QString& status, const int& applicationID, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RequestDescriptionWindow)
    , applicationID(applicationID)
{
    ui->setupUi(this);

    if(status != "Выполнено"){
        ui->pushButton_report->hide();
    }

    showDescription(applicationID);
}

RequestDescriptionWindow::~RequestDescriptionWindow(){
    delete ui;
}

void RequestDescriptionWindow::on_pushButton_clicked()
{
    this->close();
}

void RequestDescriptionWindow::showDescription(const int& applicationID){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("requestDescriptionWindowConnection")){
            db = QSqlDatabase::database("requestDescriptionWindowConnection");
            if(!db.open()){
                qDebug() << "Failed open database requestDescriptionWindowConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "requestDescriptionWindowConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database requestDescriptionWindowConnection\n";
                return;
            }
        }

        QSqlQuery queryClientID(db);
        queryClientID.prepare("SELECT id_клиента FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryClientID.bindValue(":applicationID", applicationID);

        if(!queryClientID.exec()){
            qDebug() << "Error queryClientID RequestDescriptionWindow\n";
            db.close();
            return;
        }

        int clientID = -1;
        if(queryClientID.next()){
            clientID = queryClientID.value(0).toInt();
        }

        QSqlQuery queryClient(db);
        queryClient.prepare("SELECT Фамилия, Имя, Отчество FROM Клиент WHERE id_клиента = :clientID");
        queryClient.bindValue(":clientID", clientID);

        if(!queryClient.exec()){
            qDebug() << "Error queryCustomer RequestDescriptionWindow\n";
            db.close();
            return;
        }

        QString customer = "";

        if(queryClient.next()){
            customer = queryClient.value(0).toString() + ' ' + queryClient.value(1).toString() + ' ' + queryClient.value(2).toString();
        }

        QSqlQuery queryWorkerID(db);
        queryWorkerID.prepare("SELECT id_работника FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryWorkerID.bindValue(":applicationID", applicationID);

        if(!queryWorkerID.exec()){
            qDebug() << "Error queryWorkerID RequestDescriptionWindow\n";
            db.close();
            return;
        }

        int workerID = -1;
        if(queryWorkerID.next()){
            workerID = queryWorkerID.value(0).toInt();
        }

        QSqlQuery queryWorker(db);
        queryWorker.prepare("SELECT Фамилия, Имя, Отчество FROM Работник WHERE id_работника = :workerID");
        queryWorker.bindValue(":workerID", workerID);

        if(!queryWorker.exec()){
            qDebug() << "Error queryWorker RequestDescriptionWindow\n";
            db.close();
            return;
        }

        QString worker = "";

        if(queryWorker.next()){
            worker = queryWorker.value(0).toString() + ' ' + queryWorker.value(1).toString() + ' ' + queryWorker.value(2).toString();
        }

        QSqlQuery query(db);
        query.prepare("SELECT Статус_заявки, Дата, Оборудование, Тип_неисправности, Описание_проблемы FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        query.bindValue(":applicationID", applicationID);

        if(!query.exec()){
            qDebug() << "Error query RequestDescriptionWindow\n";
            db.close();
            return;
        }

        if(query.next()){
            ui->textBrowser_worker->setText(worker);
            ui->textBrowser_customer->setText(customer);
            ui->textBrowser_applicationID->setText(QString::number(applicationID));
            ui->textBrowser_status->setText(query.value(0).toString());
            ui->textBrowser_date->setText(query.value(1).toString());
            ui->textBrowser_equipment->setText(query.value(2).toString());
            ui->textBrowser_typeOfFault->setText(query.value(3).toString());
            ui->textBrowser_more->setText(query.value(4).toString());
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("requestDescriptionWindowConnection");
}

void RequestDescriptionWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}

void RequestDescriptionWindow::on_pushButton_report_clicked()
{
    ReportWindow* reportWindow = new ReportWindow(applicationID);
    reportWindow->setAttribute(Qt::WA_DeleteOnClose);
    reportWindow->show();

    connect(reportWindow, &ReportWindow::windowClosed, this, [=](){
        reportWindow->close();
    });
}

