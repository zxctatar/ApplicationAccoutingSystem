#include "ui_clientwindow.h"
#include "clientwindow.h"
#include <createrequestwindow.h>
#include <QSqlQuery>
#include <QListWidgetItem>
#include <applicationdata.h>
#include <QSqlDatabase>

ClientWindow::ClientWindow(const QString& userLogin, QWidget *parent)
    : QMainWindow(parent)
    , userLogin(userLogin)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    showRequests(userLogin);

    ui->pushButton_close->setFixedSize(150,40);
    ui->pushButton_reload->setFixedSize(150,40);
    ui->pushButton_createRequest->setFixedSize(150,40);
}

ClientWindow::~ClientWindow(){
    delete ui;
}

void ClientWindow::on_pushButton_close_clicked()
{
    this->close();
}

void ClientWindow::showRequests(const QString& userLogin){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("clientConnection")){
            db = QSqlDatabase::database("clientConnection");
            if(!db.open()){
                qDebug() << "Failed open database clientConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "clientConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database clientConnection\n";
                return;
            }
        }

        QSqlQuery queryID(db);
        queryID.prepare("SELECT id_клиента FROM Клиент WHERE Логин = :client");
        queryID.bindValue(":client", userLogin);

        if(!queryID.exec()){
            qDebug() << "Error queryID\n";
            db.close();
            return;
        }

        int clientID = -1;
        if(queryID.next()){
            clientID = queryID.value(0).toInt();
        }

        QSqlQuery queryCount(db);
        queryCount.prepare("SELECT COUNT(*) FROM ЗаявкаНаРемонт WHERE id_клиента = :id");
        queryCount.bindValue(":id", clientID);

        if(!queryCount.exec()){
            qDebug() << "Error queryCount\n";
            db.close();
            return;
        }

        int requestCount = 0;
        if(queryCount.next()){
            requestCount = queryCount.value(0).toInt();
        }

        QSqlQuery queryRequest(db);
        queryRequest.prepare("SELECT id_заявки, Оборудование, Статус_заявки FROM ЗаявкаНаРемонт WHERE id_клиента = :clientID");
        queryRequest.bindValue(":clientID", clientID);

        if(!queryRequest.exec()){
            qDebug() << "Error queryRequest\n";
            db.close();
            return;
        }

        QList<ApplicationData> data;
        while(queryRequest.next()){
            ApplicationData tempData;
            tempData.applicationID = queryRequest.value(0).toInt();
            tempData.equipment = queryRequest.value(1).toString();
            tempData.status = queryRequest.value(2).toString();

            data.append(tempData);
        }

        for(int i = 0 ; i < requestCount; ++i){
            ClientRequestWidget* requestWidget = new ClientRequestWidget(data[i]);
            requestWidget->setAttribute(Qt::WA_DeleteOnClose);

            QListWidgetItem* item = new QListWidgetItem();

            item->setSizeHint(requestWidget->sizeHint());

            ui->listWidget->addItem(item);
            ui->listWidget->setItemWidget(item, requestWidget);
            connect(requestWidget, &ClientRequestWidget::needUpdate, this, &ClientWindow::updateWindow);
            connect(requestWidget, &ClientRequestWidget::widgetClose, this, [=](){
                delete requestWidget;
            });
        }

        queryID.finish();
        queryCount.finish();
        queryRequest.finish();
        db.close();
    }
    QSqlDatabase::removeDatabase("clientConnection");
}

void ClientWindow::on_pushButton_createRequest_clicked()
{
    CreateRequestWindow* createRequestWindow = new CreateRequestWindow(userLogin, this);
    createRequestWindow->setAttribute(Qt::WA_DeleteOnClose);
    createRequestWindow->show();
    connect(createRequestWindow, &CreateRequestWindow::needUpdate, this, &ClientWindow::updateWindow);
    connect(createRequestWindow, &CreateRequestWindow::windowClosed, this,[=](){
        delete createRequestWindow;
    });
}

void ClientWindow::updateWindow(){
    ui->listWidget->clear();
    showRequests(userLogin);
}

void ClientWindow::on_pushButton_reload_clicked()
{
    updateWindow();
}

