/********************************************************************************
** Form generated from reading UI file 'requestqescriptionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTQESCRIPTIONWINDOW_H
#define UI_REQUESTQESCRIPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <requestdescriptionwindow.h>
#include "registrationwindow.h"

QT_BEGIN_NAMESPACE

class Ui_RequestDescriptionWindow
{
public:
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QLineEdit *lineEdit;

    void setupUi(RequestDescriptionWindow *RequestDescriptionWindow)
    {
        if (RequestDescriptionWindow->objectName().isEmpty())
            RequestDescriptionWindow->setObjectName("RequestDescriptionWindow");
        RequestDescriptionWindow->resize(800, 633);
        menubar = new QMenuBar(RequestDescriptionWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statusbar = new QStatusBar(RequestDescriptionWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));
        lineEdit = new QLineEdit(RequestDescriptionWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 270, 331, 50));

        retranslateUi(RequestDescriptionWindow);

        QMetaObject::connectSlotsByName(RequestDescriptionWindow);
    } // setupUi

    void retranslateUi(RequestDescriptionWindow *RequestDescriptionWindow)
    {
        RequestDescriptionWindow->setWindowTitle(QCoreApplication::translate("RequestDescriptionWindow", "RequestDescriptionWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestDescriptionWindow: public Ui_RequestDescriptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTQESCRIPTIONWINDOW_H
