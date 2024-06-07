
#include "client_requestwidget.h"
#include <ui_client_requestwidget.h>
#include <editingwindow.h>
#include <requestdescriptionwindow.h>
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlQuery>

ClientRequestWidget::ClientRequestWidget(const ApplicationData& data, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientRequestWidget)
    , applicationID(data.applicationID)
    , equipment(data.equipment)
    , status(data.status)
{
    ui->setupUi(this);

    ui->label_requestID->setText(QString::number(applicationID));
    ui->label_equipment->setText(data.equipment);
    ui->label_status->setText(data.status);

    ui->pushButton_edit->setFixedSize(120,40);
    ui->pushButton_delete->setFixedSize(120,40);
    ui->pushButton_more->setFixedSize(120,40);
}

ClientRequestWidget::~ClientRequestWidget(){
    delete ui;
}

void ClientRequestWidget::on_pushButton_more_clicked()
{
    RequestDescriptionWindow* requestDescriptionWindow = new RequestDescriptionWindow(status, applicationID, this);
    requestDescriptionWindow->setAttribute(Qt::WA_DeleteOnClose);
    requestDescriptionWindow->show();

    connect(requestDescriptionWindow, &RequestDescriptionWindow::windowClosed, this, [=](){
        delete requestDescriptionWindow;
    });
}

void ClientRequestWidget::on_pushButton_edit_clicked()
{
    EditingWindow* editingWindow = new EditingWindow(applicationID, this);
    editingWindow->setAttribute(Qt::WA_DeleteOnClose);

    editingWindow->show();
    connect(editingWindow, &EditingWindow::changeSave, this, &ClientRequestWidget::needUpdate);
    connect(editingWindow, &EditingWindow::windowClosed, this, [=](){
        delete editingWindow;
    });
}

void ClientRequestWidget::on_pushButton_delete_clicked()
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

void ClientRequestWidget::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 2));
    painter.drawRect(rect().adjusted(0, 0, -1, -1));
}

void ClientRequestWidget::closeEvent(QCloseEvent *event){
    emit widgetClose();
    QWidget::closeEvent(event);
}
