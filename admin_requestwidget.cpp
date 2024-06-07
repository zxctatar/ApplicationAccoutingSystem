#include "ui_admin_requestwidget.h"
#include "admin_requestwidget.h"
#include "appointworkerwindow.h"
#include "requestdescriptionwindow.h"
#include <QPainter>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

AdminRequestWidget::AdminRequestWidget(const int& adminID, const ApplicationData& data, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminRequestWidget)
    , applicationID(data.applicationID)
    , equipment(data.equipment)
    , status(data.status)
    , adminID(adminID)
{
    ui->setupUi(this);

    ui->label_requestID->setText(QString::number(applicationID));
    ui->label_equipment->setText(equipment);
    ui->label_status->setText(status);

    ui->pushButton_appoint->setFixedSize(120,40);
    ui->pushButton_delete->setFixedSize(120,40);
    ui->pushButton_more->setFixedSize(120,40);
}

AdminRequestWidget::~AdminRequestWidget(){
    delete ui;
}

void AdminRequestWidget::on_pushButton_appoint_clicked()
{
    if(status == "В работе"){
        QMessageBox::warning(this, "Работник", "Работник уже назначен");
        return;
    }

    if(status == "Выполнено"){
        QMessageBox::warning(this, "Работник", "Работа уже выполнена");
        return;
    }

    AppointWorkerWindow* appointWorker = new AppointWorkerWindow(adminID, applicationID, this);
    appointWorker->setAttribute(Qt::WA_DeleteOnClose);
    appointWorker->show();
    connect(appointWorker, &AppointWorkerWindow::windowClosed, this, &AdminRequestWidget::needUpdate);
    connect(appointWorker, &AppointWorkerWindow::windowClosed, this, [=](){
        delete appointWorker;
    });
}

void AdminRequestWidget::on_pushButton_more_clicked()
{
    RequestDescriptionWindow* requestDescriptionWindow = new RequestDescriptionWindow(status, applicationID, this);
    requestDescriptionWindow->setAttribute(Qt::WA_DeleteOnClose);

    requestDescriptionWindow->show();
    connect(requestDescriptionWindow, &RequestDescriptionWindow::windowClosed, this, [=](){
        delete requestDescriptionWindow;
    });
}

void AdminRequestWidget::on_pushButton_delete_clicked()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("DeleteRequestConnection")){
            db = QSqlDatabase::database("DeleteRequestConnection");
            if(!db.open()){
                qDebug() << "Failed open database DeleteRequestConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "DeleteRequestConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database DeleteRequestConnection\n";
                return;
            }
        }

        QSqlQuery queryDelete(db);
        queryDelete.prepare("DELETE FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryDelete.bindValue(":applicationID", applicationID);

        if(!queryDelete.exec()){
            qDebug() << "Error queryDelete RequestWidget\n";
            db.close();
            return;
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("DeleteRequestConnection");
    emit needUpdate();
    this->close();
}


void AdminRequestWidget::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 2));
    painter.drawRect(rect().adjusted(0, 0, -1, -1));
}

void AdminRequestWidget::closeEvent(QCloseEvent* event){
    emit widgetClosed();
    QWidget::closeEvent(event);
}
