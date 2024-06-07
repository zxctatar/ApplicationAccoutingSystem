#include "ui_loginwindow.h"
#include "registrationwindow.h"
#include "loginwindow.h"
#include "adminwindow.h"
#include "clientwindow.h"
#include "workerwindow.h"
#include <QPropertyAnimation>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    QComboBox *comboBox = ui->comboBox;

    comboBox->addItem("Клиент");
    comboBox->addItem("Администратор");
    comboBox->addItem("Работник");
}

LoginWindow::~LoginWindow()
{
    QSqlDatabase::removeDatabase("loginConnection");
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString userType = ui->comboBox->currentText();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("loginConnection")){
            db = QSqlDatabase::database("loginConnection");
            if(!db.open()){
                qDebug() << "Failed open database LoginWindow\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "loginConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database LoginWindow\n";
                return;
            }
        }

        QSqlQuery query(db);
        if(userType == "Клиент"){
            query.prepare("SELECT * FROM Клиент WHERE BINARY Логин = :login AND BINARY Пароль = :password");
        }
        else if(userType == "Администратор"){
            query.prepare("SELECT * FROM Администратор WHERE BINARY Логин = :login AND BINARY Пароль = :password");
        }
        else if(userType == "Работник"){
            query.prepare("SELECT * FROM Работник WHERE BINARY Логин = :login AND BINARY Пароль = :password");
        }
        else{
            qDebug() << "Unknown user type\n";
            db.close();
            return;
        }
        query.bindValue(":login", username);
        query.bindValue(":password", password);

        if (!query.exec()){
            qDebug() << "Failed query\n";
            db.close();
            return;
        }

        if(query.next()){
            QRect currentGeometry = this->geometry();
            QWidget *loggetInWindow = createAccountWindow(userType, currentGeometry);
            if(loggetInWindow){
                loggetInWindow->show();
                this->close();
            }
        }
        else{
            QMessageBox::warning(this, "Ошибка входа", "Неверный логин или пароль.");
            return;
        }

        db.close();
    }
    QSqlDatabase::removeDatabase("loginConnection");
}

QWidget* LoginWindow::createAccountWindow(const QString& userType, const QRect& geometry){
    QWidget *loggedInWindow = nullptr;

    if(userType == "Клиент"){
        loggedInWindow = new ClientWindow(ui->lineEdit_username->text());
        loggedInWindow->setAttribute(Qt::WA_DeleteOnClose);
    }
    else if(userType == "Администратор"){
        loggedInWindow = new AdminWindow(ui->lineEdit_username->text());
        loggedInWindow->setAttribute(Qt::WA_DeleteOnClose);
    }
    else if(userType == "Работник"){
        loggedInWindow = new WorkerWindow(ui->lineEdit_username->text());
        loggedInWindow->setAttribute(Qt::WA_DeleteOnClose);
    }

    if(loggedInWindow){
        loggedInWindow->setGeometry(geometry);
        loggedInWindow->setWindowOpacity(0.0);
        loggedInWindow->show();
    }

    return loggedInWindow;
}

void LoginWindow::on_pushButton_registration_clicked(){
    RegistrationWindow* regWindow = new RegistrationWindow(this);
    regWindow->setAttribute(Qt::WA_DeleteOnClose);

    regWindow->show();
    connect(regWindow, &RegistrationWindow::windowClosed, this, [=](){
        delete regWindow;
    });
}


