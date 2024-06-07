/********************************************************************************
** Form generated from reading UI file 'workerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERWINDOW_H
#define UI_WORKERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <workerwindow.h>
#include "registrationwindow.h"

QT_BEGIN_NAMESPACE

class Ui_WorkerWindow
{
public:
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QLineEdit *lineEdit;

    void setupUi(WorkerWindow *WorkerWindow)
    {
        if (WorkerWindow->objectName().isEmpty())
            WorkerWindow->setObjectName("WorkerWindow");
        WorkerWindow->resize(800, 633);
        menubar = new QMenuBar(WorkerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statusbar = new QStatusBar(WorkerWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));
        lineEdit = new QLineEdit(WorkerWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 270, 331, 50));

        retranslateUi(WorkerWindow);

        QMetaObject::connectSlotsByName(WorkerWindow);
    } // setupUi

    void retranslateUi(WorkerWindow *WorkerWindow)
    {
        WorkerWindow->setWindowTitle(QCoreApplication::translate("WorkerWindow", "WorkerWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkerWindow: public Ui_WorkerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERWINDOW_H
