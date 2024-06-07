#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "applicationdata.h"
#include "admin_requestwidget.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QListWidgetItem>

AdminWindow::AdminWindow(const QString& UserLogin, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminWindow)
    , userLogin(UserLogin)
{
    ui->setupUi(this);

    ui->pushButton_close->setFixedSize(150,40);
    ui->pushButton_reload->setFixedSize(150,40);
    ui->comboBox->setFixedSize(150,25);

    ui->comboBox->addItem("В ожидании");
    ui->comboBox->addItem("В работе");
    ui->comboBox->addItem("Выполнено");

    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &AdminWindow::updateWindow);

    showRequests();
}

AdminWindow::~AdminWindow(){
    delete ui;
}

void AdminWindow::showRequests(){
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("AdminWindowConnection")){
            db = QSqlDatabase::database("AdminWindowConnection");
            if(!db.open()){
                qDebug() << "Failed open database AdminWindowConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "AdminWindowConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database AdminWindowConnection\n";
                return;
            }
        }

        QSqlQuery queryID(db);
        queryID.prepare("SELECT id_администратора FROM Администратор WHERE Логин = :login");
        queryID.bindValue(":login", userLogin);

        if(!queryID.exec()){
            qDebug() << "Error queryID AdminWindow\n";
            db.close();
            return;
        }

        int adminID = -1;

        if(queryID.next()){
            adminID = queryID.value(0).toInt();
        }

        QString queryStr;

        if(ui->comboBox->currentText() != "В ожидании"){
            queryStr = "SELECT id_заявки, Оборудование, Статус_заявки FROM ЗаявкаНаРемонт WHERE Статус_заявки = :status AND id_администратора = :adminID";
        }
        else{
            queryStr = "SELECT id_заявки, Оборудование, Статус_заявки FROM ЗаявкаНаРемонт WHERE Статус_заявки = :status";
        }

        QSqlQuery queryRequests(db);
        queryRequests.prepare(queryStr);
        queryRequests.bindValue(":status", ui->comboBox->currentText());

        if(ui->comboBox->currentText() != "В ожидании"){
            queryRequests.bindValue(":adminID", adminID);
        }

        if(!queryRequests.exec()){
            qDebug() << "Erorr queryRequests AdminWindow\n";
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

        for(int i = 0 ; i < data.size(); ++i){
            AdminRequestWidget* requestWidget = new AdminRequestWidget(adminID, data[i]);
            requestWidget->setAttribute(Qt::WA_DeleteOnClose);

            QListWidgetItem* item = new QListWidgetItem();

            item->setSizeHint(requestWidget->sizeHint());

            ui->listWidget->addItem(item);
            ui->listWidget->setItemWidget(item, requestWidget);
            connect(requestWidget, &AdminRequestWidget::needUpdate, this, &AdminWindow::updateWindow);
            connect(requestWidget, &AdminRequestWidget::widgetClosed, this, [=](){
                delete requestWidget;
            });
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("AdminWindowConnection");
}

void AdminWindow::updateWindow(){
    ui->listWidget->clear();
    showRequests();
}

void AdminWindow::on_pushButton_reload_clicked()
{
    updateWindow();
}

void AdminWindow::on_pushButton_close_clicked()
{
    this->close();
}

