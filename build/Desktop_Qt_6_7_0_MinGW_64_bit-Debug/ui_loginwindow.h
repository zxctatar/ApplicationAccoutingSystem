/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QPushButton *pushButton_registration;
    QLabel *label;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(646, 418);
        gridLayout = new QGridLayout(LoginWindow);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(LoginWindow);
        lineEdit_password->setObjectName("lineEdit_password");

        gridLayout->addWidget(lineEdit_password, 3, 2, 1, 1);

        pushButton_login = new QPushButton(LoginWindow);
        pushButton_login->setObjectName("pushButton_login");

        gridLayout->addWidget(pushButton_login, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        lineEdit_username = new QLineEdit(LoginWindow);
        lineEdit_username->setObjectName("lineEdit_username");

        gridLayout->addWidget(lineEdit_username, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        comboBox = new QComboBox(LoginWindow);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 3, 1, 1);

        pushButton_registration = new QPushButton(LoginWindow);
        pushButton_registration->setObjectName("pushButton_registration");
        pushButton_registration->setEnabled(true);

        gridLayout->addWidget(pushButton_registration, 4, 3, 1, 1);

        label = new QLabel(LoginWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 1, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        pushButton_login->setText(QCoreApplication::translate("LoginWindow", "\320\222\321\205\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "\320\242\320\270\320\277 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_registration->setText(QCoreApplication::translate("LoginWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
