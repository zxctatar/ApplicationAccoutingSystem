/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_surname;
    QLineEdit *lineEdit_lastName;
    QLabel *label_middleName;
    QLineEdit *lineEdit_middleName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_phoneNumber;
    QLineEdit *lineEdit_phoneNumber;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_mail;
    QLineEdit *lineEdit_mail;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label_password_2;
    QLineEdit *lineEdit_password_2;
    QPushButton *pushButton_create;
    QPushButton *pushButton_exit;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName("RegistrationWindow");
        RegistrationWindow->resize(400, 400);
        RegistrationWindow->setMinimumSize(QSize(400, 400));
        RegistrationWindow->setMaximumSize(QSize(400, 400));
        centralwidget = new QWidget(RegistrationWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");

        gridLayout->addWidget(label_name, 1, 1, 1, 1);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");

        gridLayout->addWidget(lineEdit_name, 1, 2, 1, 2);

        label_surname = new QLabel(centralwidget);
        label_surname->setObjectName("label_surname");

        gridLayout->addWidget(label_surname, 2, 1, 1, 1);

        lineEdit_lastName = new QLineEdit(centralwidget);
        lineEdit_lastName->setObjectName("lineEdit_lastName");

        gridLayout->addWidget(lineEdit_lastName, 2, 2, 1, 2);

        label_middleName = new QLabel(centralwidget);
        label_middleName->setObjectName("label_middleName");

        gridLayout->addWidget(label_middleName, 3, 1, 1, 1);

        lineEdit_middleName = new QLineEdit(centralwidget);
        lineEdit_middleName->setObjectName("lineEdit_middleName");

        gridLayout->addWidget(lineEdit_middleName, 3, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        label_phoneNumber = new QLabel(centralwidget);
        label_phoneNumber->setObjectName("label_phoneNumber");

        gridLayout->addWidget(label_phoneNumber, 4, 1, 1, 1);

        lineEdit_phoneNumber = new QLineEdit(centralwidget);
        lineEdit_phoneNumber->setObjectName("lineEdit_phoneNumber");

        gridLayout->addWidget(lineEdit_phoneNumber, 4, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 4, 1, 1);

        label_mail = new QLabel(centralwidget);
        label_mail->setObjectName("label_mail");
        label_mail->setLayoutDirection(Qt::LeftToRight);
        label_mail->setAutoFillBackground(false);

        gridLayout->addWidget(label_mail, 5, 1, 1, 1);

        lineEdit_mail = new QLineEdit(centralwidget);
        lineEdit_mail->setObjectName("lineEdit_mail");

        gridLayout->addWidget(lineEdit_mail, 5, 2, 1, 2);

        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");

        gridLayout->addWidget(label_login, 6, 1, 1, 1);

        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName("lineEdit_login");

        gridLayout->addWidget(lineEdit_login, 6, 2, 1, 2);

        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");

        gridLayout->addWidget(label_password, 7, 1, 1, 1);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");

        gridLayout->addWidget(lineEdit_password, 7, 2, 1, 2);

        label_password_2 = new QLabel(centralwidget);
        label_password_2->setObjectName("label_password_2");

        gridLayout->addWidget(label_password_2, 8, 1, 1, 1);

        lineEdit_password_2 = new QLineEdit(centralwidget);
        lineEdit_password_2->setObjectName("lineEdit_password_2");

        gridLayout->addWidget(lineEdit_password_2, 8, 2, 1, 2);

        pushButton_create = new QPushButton(centralwidget);
        pushButton_create->setObjectName("pushButton_create");

        gridLayout->addWidget(pushButton_create, 9, 2, 1, 1);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");

        gridLayout->addWidget(pushButton_exit, 9, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 2, 1, 1);

        RegistrationWindow->setCentralWidget(centralwidget);

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "RegistrationWindow", nullptr));
        label_name->setText(QCoreApplication::translate("RegistrationWindow", "\320\230\320\274\321\217", nullptr));
        label_surname->setText(QCoreApplication::translate("RegistrationWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_middleName->setText(QCoreApplication::translate("RegistrationWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_phoneNumber->setText(QCoreApplication::translate("RegistrationWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273.", nullptr));
        label_mail->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        label_login->setText(QCoreApplication::translate("RegistrationWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_password->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_password_2->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\276\320\262\321\202\320\276\321\200 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        pushButton_create->setText(QCoreApplication::translate("RegistrationWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("RegistrationWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
