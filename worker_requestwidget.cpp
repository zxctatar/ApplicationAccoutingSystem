#include "worker_requestwidget.h"
#include "ui_worker_requestwidget.h"
#include "requestdescriptionwindow.h"
#include "createreportwindow.h"
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlQuery>

WorkerRequestWidget::WorkerRequestWidget(const ApplicationData& data, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WorkerRequestWidget)
    , applicationID(data.applicationID)
    , equipment(data.equipment)
    , status(data.status)
{
    ui->setupUi(this);

    ui->label_requestID->setText(QString::number(applicationID));
    ui->label_equipment->setText(equipment);
    ui->label_status->setText(status);

    ui->pushButton_delete->setFixedSize(120,40);
    ui->pushButton_done->setFixedSize(120,40);
    ui->pushButton_more->setFixedSize(120,40);
}

WorkerRequestWidget::~WorkerRequestWidget(){
    delete ui;
}

void WorkerRequestWidget::on_pushButton_done_clicked()
{
    CreateReportWindow* createReport = new CreateReportWindow(applicationID, this);
    createReport->setAttribute(Qt::WA_DeleteOnClose);
    createReport->show();

    connect(createReport, &CreateReportWindow::needUpdate, this, &WorkerRequestWidget::needUpdate);
    connect(createReport, &CreateReportWindow::windowClosed, this, [=](){
        createReport->close();
    });
}

void WorkerRequestWidget::on_pushButton_more_clicked()
{
    RequestDescriptionWindow* requestDescriptionWindow = new RequestDescriptionWindow(status, applicationID, this);
    requestDescriptionWindow->setAttribute(Qt::WA_DeleteOnClose);
    requestDescriptionWindow->show();

    connect(requestDescriptionWindow, &RequestDescriptionWindow::windowClosed, this, [=](){
        delete requestDescriptionWindow;
    });
}

void WorkerRequestWidget::on_pushButton_delete_clicked()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("WorkerWidgetDeleteConnection")){
            db = QSqlDatabase::database("WorkerWidgetDeleteConnection");
            if(!db.open()){
                qDebug() << "Failed open database WorkerWidgetDeleteConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "WorkerWidgetDeleteConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database WorkerWidgetDeleteConnection\n";
                return;
            }
        }

        QSqlQuery queryDelete(db);
        queryDelete.prepare("DELETE FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryDelete.bindValue(":applicationID", applicationID);

        if(!queryDelete.exec()){
            qDebug() << "Error queryDelete WorkerRequestWidget\n";
            db.close();
            return;
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("WorkerWidgetDeleteConnection");
    emit needUpdate();
    this->close();
}

void WorkerRequestWidget::paintEvent(QPaintEvent* event){
    QWidget::paintEvent(event);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 2));
    painter.drawRect(rect().adjusted(0,0,-1,-1));
}

void WorkerRequestWidget::closeEvent(QCloseEvent* event){
    emit widgetClose();
    QWidget::closeEvent(event);
}
