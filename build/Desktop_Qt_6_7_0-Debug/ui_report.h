/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QWidget *centralwidget;
    QLabel *label_materials;
    QLabel *label_causeOfMalfunction;
    QPushButton *pushButton_close;
    QLabel *label_assistanceProvided;
    QLabel *label_price;
    QLabel *label_price_2;
    QTextBrowser *textBrowser_materials;
    QTextBrowser *textBrowser_causeOfMalfunction;
    QTextBrowser *textBrowser_assistanceProvided;

    void setupUi(QMainWindow *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName("Report");
        Report->resize(500, 530);
        Report->setMinimumSize(QSize(500, 530));
        Report->setMaximumSize(QSize(500, 530));
        Report->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: #ffffff;"));
        centralwidget = new QWidget(Report);
        centralwidget->setObjectName("centralwidget");
        label_materials = new QLabel(centralwidget);
        label_materials->setObjectName("label_materials");
        label_materials->setGeometry(QRect(110, 60, 91, 21));
        label_causeOfMalfunction = new QLabel(centralwidget);
        label_causeOfMalfunction->setObjectName("label_causeOfMalfunction");
        label_causeOfMalfunction->setGeometry(QRect(20, 200, 181, 18));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(390, 480, 88, 41));
        label_assistanceProvided = new QLabel(centralwidget);
        label_assistanceProvided->setObjectName("label_assistanceProvided");
        label_assistanceProvided->setGeometry(QRect(50, 340, 141, 18));
        label_price = new QLabel(centralwidget);
        label_price->setObjectName("label_price");
        label_price->setGeometry(QRect(120, 20, 81, 21));
        label_price_2 = new QLabel(centralwidget);
        label_price_2->setObjectName("label_price_2");
        label_price_2->setGeometry(QRect(210, 17, 271, 31));
        textBrowser_materials = new QTextBrowser(centralwidget);
        textBrowser_materials->setObjectName("textBrowser_materials");
        textBrowser_materials->setGeometry(QRect(210, 60, 271, 131));
        textBrowser_causeOfMalfunction = new QTextBrowser(centralwidget);
        textBrowser_causeOfMalfunction->setObjectName("textBrowser_causeOfMalfunction");
        textBrowser_causeOfMalfunction->setGeometry(QRect(210, 200, 271, 131));
        textBrowser_assistanceProvided = new QTextBrowser(centralwidget);
        textBrowser_assistanceProvided->setObjectName("textBrowser_assistanceProvided");
        textBrowser_assistanceProvided->setGeometry(QRect(210, 340, 271, 131));
        Report->setCentralWidget(centralwidget);

        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QMainWindow *Report)
    {
        Report->setWindowTitle(QCoreApplication::translate("Report", "Report", nullptr));
        label_materials->setText(QCoreApplication::translate("Report", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213:", nullptr));
        label_causeOfMalfunction->setText(QCoreApplication::translate("Report", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270: ", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Report", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_assistanceProvided->setText(QCoreApplication::translate("Report", "\320\236\320\272\320\260\320\267\320\260\320\275\320\275\320\260\321\217 \320\277\320\276\320\274\320\276\321\211\321\214: ", nullptr));
        label_price->setText(QCoreApplication::translate("Report", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214:", nullptr));
        label_price_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
