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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkerWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *pushButton_close;
    QPushButton *pushButton_reload;

    void setupUi(QMainWindow *WorkerWindow)
    {
        if (WorkerWindow->objectName().isEmpty())
            WorkerWindow->setObjectName("WorkerWindow");
        WorkerWindow->resize(800, 600);
        centralwidget = new QWidget(WorkerWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 0, 1, 7);

        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");

        gridLayout->addWidget(pushButton_close, 1, 6, 1, 1);

        pushButton_reload = new QPushButton(centralwidget);
        pushButton_reload->setObjectName("pushButton_reload");

        gridLayout->addWidget(pushButton_reload, 1, 5, 1, 1);

        WorkerWindow->setCentralWidget(centralwidget);

        retranslateUi(WorkerWindow);

        QMetaObject::connectSlotsByName(WorkerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WorkerWindow)
    {
        WorkerWindow->setWindowTitle(QCoreApplication::translate("WorkerWindow", "WorkerWindow", nullptr));
        pushButton_close->setText(QCoreApplication::translate("WorkerWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_reload->setText(QCoreApplication::translate("WorkerWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkerWindow: public Ui_WorkerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERWINDOW_H
