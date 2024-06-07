/********************************************************************************
** Form generated from reading UI file 'createreport.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEREPORT_H
#define UI_CREATEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateReport
{
public:
    QWidget *centralwidget;
    QLabel *label_price;
    QLineEdit *lineEdit_price;
    QLabel *label_materials;
    QLabel *label_causeOfMalfunction;
    QLabel *label_assistanceProvided;
    QTextEdit *textEdit_materials;
    QTextEdit *textEdit_causeOfMalfunction;
    QTextEdit *textEdit_assistanceProvided;
    QPushButton *pushButton_close;
    QPushButton *pushButton_done;

    void setupUi(QMainWindow *CreateReport)
    {
        if (CreateReport->objectName().isEmpty())
            CreateReport->setObjectName("CreateReport");
        CreateReport->resize(500, 530);
        CreateReport->setMinimumSize(QSize(500, 530));
        CreateReport->setMaximumSize(QSize(500, 530));
        CreateReport->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: #ffffff;"));
        centralwidget = new QWidget(CreateReport);
        centralwidget->setObjectName("centralwidget");
        label_price = new QLabel(centralwidget);
        label_price->setObjectName("label_price");
        label_price->setGeometry(QRect(120, 20, 81, 21));
        lineEdit_price = new QLineEdit(centralwidget);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setGeometry(QRect(210, 20, 271, 26));
        label_materials = new QLabel(centralwidget);
        label_materials->setObjectName("label_materials");
        label_materials->setGeometry(QRect(110, 60, 91, 21));
        label_causeOfMalfunction = new QLabel(centralwidget);
        label_causeOfMalfunction->setObjectName("label_causeOfMalfunction");
        label_causeOfMalfunction->setGeometry(QRect(20, 200, 181, 18));
        label_assistanceProvided = new QLabel(centralwidget);
        label_assistanceProvided->setObjectName("label_assistanceProvided");
        label_assistanceProvided->setGeometry(QRect(50, 340, 141, 18));
        textEdit_materials = new QTextEdit(centralwidget);
        textEdit_materials->setObjectName("textEdit_materials");
        textEdit_materials->setGeometry(QRect(210, 60, 271, 131));
        textEdit_causeOfMalfunction = new QTextEdit(centralwidget);
        textEdit_causeOfMalfunction->setObjectName("textEdit_causeOfMalfunction");
        textEdit_causeOfMalfunction->setGeometry(QRect(210, 200, 271, 131));
        textEdit_assistanceProvided = new QTextEdit(centralwidget);
        textEdit_assistanceProvided->setObjectName("textEdit_assistanceProvided");
        textEdit_assistanceProvided->setGeometry(QRect(210, 340, 271, 131));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(390, 480, 88, 41));
        pushButton_done = new QPushButton(centralwidget);
        pushButton_done->setObjectName("pushButton_done");
        pushButton_done->setGeometry(QRect(290, 480, 88, 41));
        CreateReport->setCentralWidget(centralwidget);

        retranslateUi(CreateReport);

        QMetaObject::connectSlotsByName(CreateReport);
    } // setupUi

    void retranslateUi(QMainWindow *CreateReport)
    {
        CreateReport->setWindowTitle(QCoreApplication::translate("CreateReport", "CreateReport", nullptr));
        label_price->setText(QCoreApplication::translate("CreateReport", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214:", nullptr));
        label_materials->setText(QCoreApplication::translate("CreateReport", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213:", nullptr));
        label_causeOfMalfunction->setText(QCoreApplication::translate("CreateReport", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270: ", nullptr));
        label_assistanceProvided->setText(QCoreApplication::translate("CreateReport", "\320\236\320\272\320\260\320\267\320\260\320\275\320\275\320\260\321\217 \320\277\320\276\320\274\320\276\321\211\321\214: ", nullptr));
        pushButton_close->setText(QCoreApplication::translate("CreateReport", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_done->setText(QCoreApplication::translate("CreateReport", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateReport: public Ui_CreateReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREPORT_H
