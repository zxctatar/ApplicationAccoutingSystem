/********************************************************************************
** Form generated from reading UI file 'requestdescriptionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTDESCRIPTIONWINDOW_H
#define UI_REQUESTDESCRIPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestDescriptionWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser_applicationID;
    QTextBrowser *textBrowser_typeOfFault;
    QPushButton *pushButton;
    QLabel *label_typeOfFault;
    QLabel *label_customer;
    QTextBrowser *textBrowser_date;
    QLabel *label_more;
    QTextBrowser *textBrowser_status;
    QLabel *label_applicationID;
    QLabel *label_date;
    QTextBrowser *textBrowser_more;
    QLabel *label_equipment;
    QTextBrowser *textBrowser_customer;
    QLabel *label_status;
    QTextBrowser *textBrowser_equipment;
    QLabel *label_customer_worker;
    QTextBrowser *textBrowser_worker;
    QPushButton *pushButton_report;

    void setupUi(QMainWindow *RequestDescriptionWindow)
    {
        if (RequestDescriptionWindow->objectName().isEmpty())
            RequestDescriptionWindow->setObjectName("RequestDescriptionWindow");
        RequestDescriptionWindow->resize(450, 460);
        RequestDescriptionWindow->setMinimumSize(QSize(450, 460));
        RequestDescriptionWindow->setMaximumSize(QSize(450, 460));
        RequestDescriptionWindow->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: #ffffff;"));
        centralwidget = new QWidget(RequestDescriptionWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser_applicationID = new QTextBrowser(centralwidget);
        textBrowser_applicationID->setObjectName("textBrowser_applicationID");
        textBrowser_applicationID->setGeometry(QRect(180, 80, 256, 21));
        textBrowser_applicationID->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_applicationID->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_typeOfFault = new QTextBrowser(centralwidget);
        textBrowser_typeOfFault->setObjectName("textBrowser_typeOfFault");
        textBrowser_typeOfFault->setGeometry(QRect(180, 200, 256, 21));
        textBrowser_typeOfFault->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_typeOfFault->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 420, 80, 31));
        label_typeOfFault = new QLabel(centralwidget);
        label_typeOfFault->setObjectName("label_typeOfFault");
        label_typeOfFault->setGeometry(QRect(30, 200, 141, 16));
        label_customer = new QLabel(centralwidget);
        label_customer->setObjectName("label_customer");
        label_customer->setGeometry(QRect(100, 50, 81, 16));
        textBrowser_date = new QTextBrowser(centralwidget);
        textBrowser_date->setObjectName("textBrowser_date");
        textBrowser_date->setGeometry(QRect(180, 140, 256, 21));
        textBrowser_date->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_date->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_more = new QLabel(centralwidget);
        label_more->setObjectName("label_more");
        label_more->setGeometry(QRect(90, 230, 81, 16));
        textBrowser_status = new QTextBrowser(centralwidget);
        textBrowser_status->setObjectName("textBrowser_status");
        textBrowser_status->setGeometry(QRect(180, 110, 256, 21));
        textBrowser_status->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_status->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_applicationID = new QLabel(centralwidget);
        label_applicationID->setObjectName("label_applicationID");
        label_applicationID->setGeometry(QRect(70, 80, 111, 16));
        label_date = new QLabel(centralwidget);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(130, 140, 41, 16));
        textBrowser_more = new QTextBrowser(centralwidget);
        textBrowser_more->setObjectName("textBrowser_more");
        textBrowser_more->setGeometry(QRect(180, 230, 256, 181));
        label_equipment = new QLabel(centralwidget);
        label_equipment->setObjectName("label_equipment");
        label_equipment->setGeometry(QRect(60, 170, 111, 16));
        textBrowser_customer = new QTextBrowser(centralwidget);
        textBrowser_customer->setObjectName("textBrowser_customer");
        textBrowser_customer->setGeometry(QRect(180, 50, 256, 21));
        textBrowser_customer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_customer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_status = new QLabel(centralwidget);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(120, 110, 51, 16));
        textBrowser_equipment = new QTextBrowser(centralwidget);
        textBrowser_equipment->setObjectName("textBrowser_equipment");
        textBrowser_equipment->setGeometry(QRect(180, 170, 256, 21));
        textBrowser_equipment->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_equipment->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_customer_worker = new QLabel(centralwidget);
        label_customer_worker->setObjectName("label_customer_worker");
        label_customer_worker->setGeometry(QRect(100, 20, 81, 16));
        textBrowser_worker = new QTextBrowser(centralwidget);
        textBrowser_worker->setObjectName("textBrowser_worker");
        textBrowser_worker->setGeometry(QRect(180, 20, 256, 21));
        textBrowser_worker->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_worker->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_report = new QPushButton(centralwidget);
        pushButton_report->setObjectName("pushButton_report");
        pushButton_report->setGeometry(QRect(260, 420, 80, 31));
        RequestDescriptionWindow->setCentralWidget(centralwidget);

        retranslateUi(RequestDescriptionWindow);

        QMetaObject::connectSlotsByName(RequestDescriptionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RequestDescriptionWindow)
    {
        RequestDescriptionWindow->setWindowTitle(QCoreApplication::translate("RequestDescriptionWindow", "RequestDescriptionWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_typeOfFault->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\242\320\270\320\277 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_customer->setText(QCoreApplication::translate("RequestDescriptionWindow", "  \320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272:", nullptr));
        label_more->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_applicationID->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\217\320\262\320\272\320\270:", nullptr));
        label_date->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\224\320\260\321\202\320\260:", nullptr));
        label_equipment->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_status->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        label_customer_worker->setText(QCoreApplication::translate("RequestDescriptionWindow", "  \320\240\320\260\320\261\320\276\321\202\320\275\320\270\320\272:", nullptr));
        pushButton_report->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\236\321\202\321\207\321\221\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestDescriptionWindow: public Ui_RequestDescriptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTDESCRIPTIONWINDOW_H
