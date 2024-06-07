#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include <QPropertyAnimation>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QRegularExpression>

RegistrationWindow::RegistrationWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);
    numberValidator = new QRegularExpressionValidator(QRegularExpression("[0-9]{11}"),this);
    ui->lineEdit_phoneNumber->setValidator(numberValidator);
}

RegistrationWindow::~RegistrationWindow()
{
    delete numberValidator;
    delete ui;
}

void RegistrationWindow::on_pushButton_exit_clicked()
{
    this->close();
}

void RegistrationWindow::on_pushButton_create_clicked()
{
    {
        QSqlDatabase db;
        if(QSqlDatabase::contains("registrationConnection")){
            db = QSqlDatabase::database("registrationConnection");
            if(!db.open()){
                qDebug() << "Failed open database registrationConnection\n";
                return;
            }
        }
        else{
            db = QSqlDatabase::addDatabase("QMYSQL", "registrationConnection");
            db.setHostName("localhost");
            db.setDatabaseName("zxctatar");
            if(!db.open()){
                qDebug() << "Failed open database registrationConnection\n";
                return;
            }
        }

        QRegularExpression mailRegex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionValidator* validator = new QRegularExpressionValidator(mailRegex,this);
        ui->lineEdit_mail->setValidator(validator);

        if(ui->lineEdit_name->text().length() == 0){
            QMessageBox::warning(this, "Имя", "Введите имя");
            return;
        }

        if(ui->lineEdit_lastName->text().length() == 0){
            QMessageBox::warning(this, "Фамилия", "Введите фамилию");
            return;
        }

        if(ui->lineEdit_middleName->text().length() == 0){
            QMessageBox::warning(this, "Отчество", "Введите отчество");
            return;
        }

        if(ui->lineEdit_phoneNumber->text().length() != 11){
            QMessageBox::warning(this, "Неверный телефон", "Неверно введён номер телефона");
            return;
        }

        QSqlQuery queryPhone(db);
        queryPhone.prepare("SELECT Номер FROM Клиент WHERE Номер = :phoneNumber\n"
                           "UNION ALL\n"
                           "SELECT Номер FROM Администратор WHERE Номер = :phoneNumber\n"
                           "UNION ALL\n"
                           "SELECT Номер FROM Работник WHERE Номер = :phoneNumber\n");

        queryPhone.bindValue(":phoneNumber", ui->lineEdit_phoneNumber->text());

        if(!queryPhone.exec()){
            qDebug() << "Error queryPhone\n";
            db.close();
            return;
        }

        if(queryPhone.next()){
            int count = queryPhone.value(0).toInt();
            if(count > 0){
                QMessageBox::warning(this, "Существующий пользователь", "Пользователь с данным номером телефона уже зарегистрирован");
                return;
            }
        }

        if(ui->lineEdit_mail->text().length() == 0){
            QMessageBox::warning(this, "Почта", "Введите почту");
            return;
        }

        if(!mailRegex.match(ui->lineEdit_mail->text()).hasMatch()){
            QMessageBox::warning(this, "Неверная почта", "Неверно введена почта");
            return;
        }

        QSqlQuery queryMail(db);
        queryMail.prepare("SELECT Почта FROM Клиент WHERE Почта = :mail\n"
                          "UNION ALL\n"
                          "SELECT Почта FROM Администратор WHERE Почта = :mail\n"
                          "UNION ALL\n"
                          "SELECT Почта FROM Работник WHERE Почта = :mail\n");

        queryMail.bindValue(":mail", ui->lineEdit_mail->text());
        if(!queryMail.exec()){
            qDebug() << "Error queryMail\n";
            db.close();
            return;
        }

        if(queryMail.next()){
            int count = queryMail.value(0).toInt();
            if(count > 0){
                QMessageBox::warning(this, "Существующий пользователь", "Пользователь с данной почтой уже зарегистрирован");
                return;
            }
        }

        if(ui->lineEdit_login->text().length() == 0){
            QMessageBox::warning(this, "Логин", "Введите логин");
            return;
        }

        QSqlQuery queryLogin(db);
        queryLogin.prepare("SELECT Логин FROM Клиент WHERE Логин = :login\n"
                           "UNION ALL\n"
                           "SELECT Логин FROM Администратор WHERE Логин = :login\n"
                           "UNION ALL\n"
                           "SELECT Логин FROM Работник WHERE Логин = :login\n");

        queryLogin.bindValue(":login", ui->lineEdit_login->text());
        if(!queryLogin.exec()){
            qDebug() << "Error queryLogin\n";
            db.close();
            return;
        }

        if(queryLogin.next()){
            int count = queryLogin.value(0).toInt();
            if(count > 0){
                QMessageBox::warning(this, "Существующий пользователь", "Пользователь с данным логином уже зарегистрирован");
                return;
            }
        }

        if(ui->lineEdit_password->text().length() == 0){
            QMessageBox::warning(this, "Пароль", "Введите пароль");
            return;
        }

        if(ui->lineEdit_password_2->text().length() == 0){
            QMessageBox::warning(this, "Пароль", "Повторите пароль");
            return;
        }

        if(ui->lineEdit_password->text() != ui->lineEdit_password_2->text()){
            QMessageBox::warning(this, "Неверный пароль", "Неверно введён пароль");
            return;
        }

        QSqlQuery query(db);
        query.prepare("INSERT INTO Клиент (Имя, Фамилия, Отчество, Номер, Почта, Логин, Пароль) "
                      "VALUES (:firstName, :lastName, :middleName, :phoneNumber, :email, :login, :password)");
        query.bindValue(":firstName", ui->lineEdit_name->text());
        query.bindValue(":lastName", ui->lineEdit_lastName->text());
        query.bindValue(":middleName", ui->lineEdit_middleName->text());
        query.bindValue(":phoneNumber", ui->lineEdit_phoneNumber->text());
        query.bindValue(":email", ui->lineEdit_mail->text());
        query.bindValue(":login", ui->lineEdit_login->text());
        query.bindValue(":password", ui->lineEdit_password->text());

        if(!query.exec()){
            qDebug() << "Ошибка добавления клиента\n";
            db.close();
            return;
        }

        db.close();
        delete validator;
        this->close();
    }
    QSqlDatabase::removeDatabase("registrationConnection");
}

void RegistrationWindow::closeEvent(QCloseEvent* event){
    emit windowClosed();
    QWidget::closeEvent(event);
}
