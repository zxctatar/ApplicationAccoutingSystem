/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *pushButton_reload;
    QPushButton *pushButton_close;
    QPushButton *pushButton_createRequest;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(800, 593);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 8, 1, 8);

        pushButton_reload = new QPushButton(centralwidget);
        pushButton_reload->setObjectName("pushButton_reload");

        gridLayout->addWidget(pushButton_reload, 5, 14, 1, 1);

        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");

        gridLayout->addWidget(pushButton_close, 5, 15, 1, 1);

        pushButton_createRequest = new QPushButton(centralwidget);
        pushButton_createRequest->setObjectName("pushButton_createRequest");

        gridLayout->addWidget(pushButton_createRequest, 5, 13, 1, 1);

        ClientWindow->setCentralWidget(centralwidget);

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "ClientWindow", nullptr));
        pushButton_reload->setText(QCoreApplication::translate("ClientWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        pushButton_close->setText(QCoreApplication::translate("ClientWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_createRequest->setText(QCoreApplication::translate("ClientWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
