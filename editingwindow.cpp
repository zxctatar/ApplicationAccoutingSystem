#include "editingwindow.h"
#include "ui_editingwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>

EditingWindow::EditingWindow(const int& applicationID, QWidget *parent)
    : QMainWindow(parent)
    , applicationID(applicationID)
    , ui(new Ui::EditingWindow)
{
    ui->setupUi(this);
    showData();
}

EditingWindow::~EditingWindow(){
    delete ui;
}

void EditingWindow::on_pushButton_close_clicked()
{
    this->close();
    emit windowClosed();
}

void EditingWindow::on_pushButton_save_clicked()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("EditingWindowConnection")){
            db = QSqlDatabase::database("EditingWindowConnection");
            if(!db.open()){
                qDebug() << "Failed open database EditingWindowConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "EditingWindowConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database EditingWindowConnection\n";
                return;
            }
        }

        QSqlQuery queryEdit(db);
        queryEdit.prepare("UPDATE ЗаявкаНаРемонт SET Оборудование = :equipment, Тип_неисправности = :typeOfFault, Описание_проблемы = :description WHERE id_заявки = :applicationID");
        queryEdit.bindValue(":equipment", ui->lineEdit_equipment->text());
        queryEdit.bindValue(":typeOfFault", ui->lineEdit_typeOfFault->text());
        queryEdit.bindValue(":description", ui->textEdit_description->toPlainText());
        queryEdit.bindValue(":applicationID", applicationID);

        if(!queryEdit.exec()){
            qDebug() << "Error queryEdit EditingWindow\n";
            db.close();
            return;
        }
        db.close();
    }
    QSqlDatabase::removeDatabase("EditingWindowConnection");
    emit changeSave();
    this->close();
}

void EditingWindow::showData()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("ShowDataConnection")){
            db = QSqlDatabase::database("ShowDataConnection");
            if(!db.open()){
                qDebug() << "Failed open database ShowDataConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "ShowDataConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database ShowDataConnection\n";
                return;
            }
        }

        QSqlQuery queryData(db);
        queryData.prepare("SELECT Оборудование, Тип_неисправности, Описание_проблемы FROM ЗаявкаНаРемонт WHERE id_заявки = :applicationID");
        queryData.bindValue(":applicationID", applicationID);

        if(!queryData.exec()){
            qDebug() << "Error queryData EditingWindow\n";
            db.close();
            return;
        }

        if(queryData.next()){
            ui->lineEdit_equipment->setText(queryData.value(0).toString());
            ui->lineEdit_typeOfFault->setText(queryData.value(1).toString());
            ui->textEdit_description->setText(queryData.value(2).toString());
        }
        db.close();
    }
    QSqlDatabase::removeDatabase("ShowDataConnection");
}

void EditingWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}
