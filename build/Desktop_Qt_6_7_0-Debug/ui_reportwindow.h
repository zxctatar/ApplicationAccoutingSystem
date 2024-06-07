/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
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
    QLabel *label_dateStart;
    QLabel *label_dateStart_2;
    QLabel *label_dateEnd;
    QLabel *label_dateEnd_2;

    void setupUi(QMainWindow *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName("ReportWindow");
        ReportWindow->resize(500, 630);
        ReportWindow->setMinimumSize(QSize(500, 630));
        ReportWindow->setMaximumSize(QSize(500, 630));
        ReportWindow->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: #ffffff;"));
        centralwidget = new QWidget(ReportWindow);
        centralwidget->setObjectName("centralwidget");
        label_materials = new QLabel(centralwidget);
        label_materials->setObjectName("label_materials");
        label_materials->setGeometry(QRect(110, 160, 91, 21));
        label_causeOfMalfunction = new QLabel(centralwidget);
        label_causeOfMalfunction->setObjectName("label_causeOfMalfunction");
        label_causeOfMalfunction->setGeometry(QRect(20, 300, 181, 18));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(390, 580, 88, 41));
        label_assistanceProvided = new QLabel(centralwidget);
        label_assistanceProvided->setObjectName("label_assistanceProvided");
        label_assistanceProvided->setGeometry(QRect(50, 440, 141, 18));
        label_price = new QLabel(centralwidget);
        label_price->setObjectName("label_price");
        label_price->setGeometry(QRect(120, 110, 81, 21));
        label_price_2 = new QLabel(centralwidget);
        label_price_2->setObjectName("label_price_2");
        label_price_2->setGeometry(QRect(210, 110, 271, 21));
        textBrowser_materials = new QTextBrowser(centralwidget);
        textBrowser_materials->setObjectName("textBrowser_materials");
        textBrowser_materials->setGeometry(QRect(210, 160, 271, 131));
        textBrowser_causeOfMalfunction = new QTextBrowser(centralwidget);
        textBrowser_causeOfMalfunction->setObjectName("textBrowser_causeOfMalfunction");
        textBrowser_causeOfMalfunction->setGeometry(QRect(210, 300, 271, 131));
        textBrowser_assistanceProvided = new QTextBrowser(centralwidget);
        textBrowser_assistanceProvided->setObjectName("textBrowser_assistanceProvided");
        textBrowser_assistanceProvided->setGeometry(QRect(210, 440, 271, 131));
        label_dateStart = new QLabel(centralwidget);
        label_dateStart->setObjectName("label_dateStart");
        label_dateStart->setGeometry(QRect(90, 10, 111, 21));
        label_dateStart_2 = new QLabel(centralwidget);
        label_dateStart_2->setObjectName("label_dateStart_2");
        label_dateStart_2->setGeometry(QRect(210, 10, 271, 21));
        label_dateEnd = new QLabel(centralwidget);
        label_dateEnd->setObjectName("label_dateEnd");
        label_dateEnd->setGeometry(QRect(100, 60, 101, 21));
        label_dateEnd_2 = new QLabel(centralwidget);
        label_dateEnd_2->setObjectName("label_dateEnd_2");
        label_dateEnd_2->setGeometry(QRect(210, 60, 271, 21));
        ReportWindow->setCentralWidget(centralwidget);

        retranslateUi(ReportWindow);

        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReportWindow)
    {
        ReportWindow->setWindowTitle(QCoreApplication::translate("ReportWindow", "ReportWindow", nullptr));
        label_materials->setText(QCoreApplication::translate("ReportWindow", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213:", nullptr));
        label_causeOfMalfunction->setText(QCoreApplication::translate("ReportWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270: ", nullptr));
        pushButton_close->setText(QCoreApplication::translate("ReportWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_assistanceProvided->setText(QCoreApplication::translate("ReportWindow", "\320\236\320\272\320\260\320\267\320\260\320\275\320\275\320\260\321\217 \320\277\320\276\320\274\320\276\321\211\321\214: ", nullptr));
        label_price->setText(QCoreApplication::translate("ReportWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214:", nullptr));
        label_price_2->setText(QString());
        label_dateStart->setText(QCoreApplication::translate("ReportWindow", " \320\222\321\200\320\265\320\274\321\217_\320\275\320\260\321\207\320\260\320\273\320\260: ", nullptr));
        label_dateStart_2->setText(QString());
        label_dateEnd->setText(QCoreApplication::translate("ReportWindow", " \320\222\321\200\320\265\320\274\321\217_\320\272\320\276\320\275\321\206\320\260: ", nullptr));
        label_dateEnd_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
