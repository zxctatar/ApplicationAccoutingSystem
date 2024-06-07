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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_login;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_6;
    QLabel *label_telephone;
    QLineEdit *lineEdit;
    QLabel *label_mail;
    QLineEdit *lineEdit_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_password;
    QSpacerItem *verticalSpacer;
    QLabel *label_surname;
    QLabel *label_name;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_password_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_middle_name;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName("RegistrationWindow");
        RegistrationWindow->setWindowModality(Qt::ApplicationModal);
        RegistrationWindow->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegistrationWindow->sizePolicy().hasHeightForWidth());
        RegistrationWindow->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(RegistrationWindow);
        gridLayout->setObjectName("gridLayout");
        label_login = new QLabel(RegistrationWindow);
        label_login->setObjectName("label_login");

        gridLayout->addWidget(label_login, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(RegistrationWindow);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 9, 3, 1, 1);

        lineEdit_6 = new QLineEdit(RegistrationWindow);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 6, 2, 1, 2);

        label_telephone = new QLabel(RegistrationWindow);
        label_telephone->setObjectName("label_telephone");

        gridLayout->addWidget(label_telephone, 4, 1, 1, 1);

        lineEdit = new QLineEdit(RegistrationWindow);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 2, 1, 2);

        label_mail = new QLabel(RegistrationWindow);
        label_mail->setObjectName("label_mail");
        label_mail->setLayoutDirection(Qt::LeftToRight);
        label_mail->setAutoFillBackground(false);

        gridLayout->addWidget(label_mail, 5, 1, 1, 1);

        lineEdit_8 = new QLineEdit(RegistrationWindow);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout->addWidget(lineEdit_8, 8, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 4, 1, 1);

        label_password = new QLabel(RegistrationWindow);
        label_password->setObjectName("label_password");

        gridLayout->addWidget(label_password, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 2, 1, 1);

        label_surname = new QLabel(RegistrationWindow);
        label_surname->setObjectName("label_surname");

        gridLayout->addWidget(label_surname, 2, 1, 1, 1);

        label_name = new QLabel(RegistrationWindow);
        label_name->setObjectName("label_name");

        gridLayout->addWidget(label_name, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(RegistrationWindow);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 2);

        lineEdit_5 = new QLineEdit(RegistrationWindow);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 5, 2, 1, 2);

        lineEdit_4 = new QLineEdit(RegistrationWindow);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 4, 2, 1, 2);

        lineEdit_7 = new QLineEdit(RegistrationWindow);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout->addWidget(lineEdit_7, 7, 2, 1, 2);

        lineEdit_3 = new QLineEdit(RegistrationWindow);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 2);

        pushButton = new QPushButton(RegistrationWindow);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 9, 2, 1, 1);

        label_password_2 = new QLabel(RegistrationWindow);
        label_password_2->setObjectName("label_password_2");

        gridLayout->addWidget(label_password_2, 8, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        label_middle_name = new QLabel(RegistrationWindow);
        label_middle_name->setObjectName("label_middle_name");

        gridLayout->addWidget(label_middle_name, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QWidget *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "RegistrationWindow", nullptr));
        label_login->setText(QCoreApplication::translate("RegistrationWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegistrationWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_telephone->setText(QCoreApplication::translate("RegistrationWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273.", nullptr));
        label_mail->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        label_password->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_surname->setText(QCoreApplication::translate("RegistrationWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_name->setText(QCoreApplication::translate("RegistrationWindow", "\320\230\320\274\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label_password_2->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\276\321\202\320\262\320\276\321\200 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_middle_name->setText(QCoreApplication::translate("RegistrationWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
