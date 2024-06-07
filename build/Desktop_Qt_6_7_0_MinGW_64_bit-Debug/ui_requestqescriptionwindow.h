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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestDescriptionWindow
{
public:
    QLabel *label_applicationID;
    QLabel *label_date;
    QLabel *label_equipment;
    QLabel *label_typeOfFault;
    QLabel *label_more;
    QLabel *label_status;
    QTextBrowser *textBrowser_typeOfFault;
    QTextBrowser *textBrowser_equipment;
    QTextBrowser *textBrowser_date;
    QTextBrowser *textBrowser_status;
    QTextBrowser *textBrowser_applicationID;
    QTextBrowser *textBrowser_more;
    QPushButton *pushButton;

    void setupUi(QWidget *RequestDescriptionWindow)
    {
        if (RequestDescriptionWindow->objectName().isEmpty())
            RequestDescriptionWindow->setObjectName("RequestDescriptionWindow");
        RequestDescriptionWindow->resize(400, 400);
        RequestDescriptionWindow->setMinimumSize(QSize(400, 400));
        RequestDescriptionWindow->setMaximumSize(QSize(400, 400));
        label_applicationID = new QLabel(RequestDescriptionWindow);
        label_applicationID->setObjectName("label_applicationID");
        label_applicationID->setGeometry(QRect(40, 20, 81, 16));
        label_date = new QLabel(RequestDescriptionWindow);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(90, 80, 31, 16));
        label_equipment = new QLabel(RequestDescriptionWindow);
        label_equipment->setObjectName("label_equipment");
        label_equipment->setGeometry(QRect(30, 110, 91, 16));
        label_typeOfFault = new QLabel(RequestDescriptionWindow);
        label_typeOfFault->setObjectName("label_typeOfFault");
        label_typeOfFault->setGeometry(QRect(10, 140, 111, 16));
        label_more = new QLabel(RequestDescriptionWindow);
        label_more->setObjectName("label_more");
        label_more->setGeometry(QRect(60, 170, 61, 16));
        label_status = new QLabel(RequestDescriptionWindow);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(80, 50, 41, 16));
        textBrowser_typeOfFault = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_typeOfFault->setObjectName("textBrowser_typeOfFault");
        textBrowser_typeOfFault->setGeometry(QRect(130, 140, 256, 21));
        textBrowser_typeOfFault->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_typeOfFault->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_equipment = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_equipment->setObjectName("textBrowser_equipment");
        textBrowser_equipment->setGeometry(QRect(130, 110, 256, 21));
        textBrowser_equipment->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_equipment->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_date = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_date->setObjectName("textBrowser_date");
        textBrowser_date->setGeometry(QRect(130, 80, 256, 21));
        textBrowser_date->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_date->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_status = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_status->setObjectName("textBrowser_status");
        textBrowser_status->setGeometry(QRect(130, 50, 256, 21));
        textBrowser_status->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_status->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_applicationID = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_applicationID->setObjectName("textBrowser_applicationID");
        textBrowser_applicationID->setGeometry(QRect(130, 20, 256, 21));
        textBrowser_applicationID->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_applicationID->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_more = new QTextBrowser(RequestDescriptionWindow);
        textBrowser_more->setObjectName("textBrowser_more");
        textBrowser_more->setGeometry(QRect(130, 170, 256, 181));
        pushButton = new QPushButton(RequestDescriptionWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 360, 80, 31));

        retranslateUi(RequestDescriptionWindow);

        QMetaObject::connectSlotsByName(RequestDescriptionWindow);
    } // setupUi

    void retranslateUi(QWidget *RequestDescriptionWindow)
    {
        RequestDescriptionWindow->setWindowTitle(QCoreApplication::translate("RequestDescriptionWindow", "RequestDescriptionWindow", nullptr));
        label_applicationID->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\217\320\262\320\272\320\270:", nullptr));
        label_date->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\224\320\260\321\202\320\260:", nullptr));
        label_equipment->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_typeOfFault->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\242\320\270\320\277 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_more->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_status->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        pushButton->setText(QCoreApplication::translate("RequestDescriptionWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestDescriptionWindow: public Ui_RequestDescriptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTQESCRIPTIONWINDOW_H
