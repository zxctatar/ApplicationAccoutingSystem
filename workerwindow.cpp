#include "workerwindow.h"
#include "ui_workerwindow.h"
#include "applicationdata.h"
#include "worker_requestwidget.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QListWidgetItem>

WorkerWindow::WorkerWindow(const QString& userLogin, QWidget *parent)
    : QMainWindow(parent)
    , userLogin(userLogin)
    , ui(new Ui::WorkerWindow)
{
    ui->setupUi(this);

    showRequests();

    ui->pushButton_close->setFixedSize(150,40);
    ui->pushButton_reload->setFixedSize(150,40);
}

WorkerWindow::~WorkerWindow(){
    delete ui;
}

void WorkerWindow::showRequests(){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("WorkerWindowConnection")){
            db = QSqlDatabase::database("WorkerWindowConnection");
            if(!db.open()){
                qDebug() << "Failed open database WorkerWindowConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "WorkerWindowConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database WorkerWindowConnection\n";
                return;
            }
        }

        QSqlQuery queryWorkerID(db);
        queryWorkerID.prepare("SELECT id_работника FROM Работник WHERE Логин = :userLogin");
        queryWorkerID.bindValue(":userLogin", userLogin);

        if(!queryWorkerID.exec()){
            qDebug() << "Error queryWorkerID WorkerWindow\n";
            db.close();
            return;
        }

        int workerID = -1;

        if(queryWorkerID.next()){
            workerID = queryWorkerID.value(0).toInt();
        }

        QSqlQuery queryRequests(db);
        queryRequests.prepare("SELECT id_заявки, Оборудование, Статус_заявки FROM ЗаявкаНаРемонт WHERE id_работника = :workerID AND Статус_заявки = :status");
        queryRequests.bindValue(":workerID", workerID);
        queryRequests.bindValue(":status", "В работе");

        if(!queryRequests.exec()){
            qDebug() << "Error queryRequests WorkerWindow\n";
            db.close();
            return;
        }

        QList<ApplicationData> data;
        while(queryRequests.next()){
            ApplicationData tempData;

            tempData.applicationID = queryRequests.value(0).toInt();
            tempData.equipment = queryRequests.value(1).toString();
            tempData.status = queryRequests.value(2).toString();

            data.append(tempData);
        }

        for(int i = 0; i < data.size(); ++i){
            WorkerRequestWidget* workerRequestWidget = new WorkerRequestWidget(data[i]);
            workerRequestWidget->setAttribute(Qt::WA_DeleteOnClose);

            QListWidgetItem* item = new QListWidgetItem();
            item->setSizeHint(workerRequestWidget->sizeHint());

            ui->listWidget->addItem(item);
            ui->listWidget->setItemWidget(item, workerRequestWidget);

            connect(workerRequestWidget, &WorkerRequestWidget::needUpdate, this, &WorkerWindow::updateWindow);
            connect(workerRequestWidget, &WorkerRequestWidget::widgetClose, this, [=](){
                delete workerRequestWidget;
            });
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("WorkerWindowConnection");
}

void WorkerWindow::on_pushButton_reload_clicked()
{
    updateWindow();
}

void WorkerWindow::on_pushButton_close_clicked()
{
    this->close();
}

void WorkerWindow::updateWindow(){
    ui->listWidget->clear();
    showRequests();
}
