/********************************************************************************
** Form generated from reading UI file 'applointmentemloyeewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLOINTMENTEMLOYEEWINDOW_H
#define UI_APPLOINTMENTEMLOYEEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <applointmentemloyeewindow.h>
#include "registrationwindow.h"

QT_BEGIN_NAMESPACE

class Ui_ApplointmentEmloyeeWindow
{
public:
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QLineEdit *lineEdit;

    void setupUi(ApplointmentEmloyeeWindow *ApplointmentEmloyeeWindow)
    {
        if (ApplointmentEmloyeeWindow->objectName().isEmpty())
            ApplointmentEmloyeeWindow->setObjectName("ApplointmentEmloyeeWindow");
        ApplointmentEmloyeeWindow->resize(800, 633);
        menubar = new QMenuBar(ApplointmentEmloyeeWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statusbar = new QStatusBar(ApplointmentEmloyeeWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));
        lineEdit = new QLineEdit(ApplointmentEmloyeeWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 270, 331, 50));

        retranslateUi(ApplointmentEmloyeeWindow);

        QMetaObject::connectSlotsByName(ApplointmentEmloyeeWindow);
    } // setupUi

    void retranslateUi(ApplointmentEmloyeeWindow *ApplointmentEmloyeeWindow)
    {
        ApplointmentEmloyeeWindow->setWindowTitle(QCoreApplication::translate("ApplointmentEmloyeeWindow", "ApplointmentEmloyeeWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplointmentEmloyeeWindow: public Ui_ApplointmentEmloyeeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLOINTMENTEMLOYEEWINDOW_H
