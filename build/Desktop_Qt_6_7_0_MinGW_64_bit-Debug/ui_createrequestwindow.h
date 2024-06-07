/********************************************************************************
** Form generated from reading UI file 'createrequestwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEREQUESTWINDOW_H
#define UI_CREATEREQUESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRequestWindow
{
public:
    QLabel *label_equipment;
    QLabel *label_typeOfFault;
    QLabel *label_description;
    QPushButton *pushButton_close;
    QPushButton *pushButton_create;
    QTextEdit *textEdit_description;
    QLineEdit *lineEdit_equipment;
    QLineEdit *lineEdit_typeOfFault;

    void setupUi(QWidget *CreateRequestWindow)
    {
        if (CreateRequestWindow->objectName().isEmpty())
            CreateRequestWindow->setObjectName("CreateRequestWindow");
        CreateRequestWindow->resize(400, 400);
        CreateRequestWindow->setMinimumSize(QSize(400, 400));
        CreateRequestWindow->setMaximumSize(QSize(400, 400));
        label_equipment = new QLabel(CreateRequestWindow);
        label_equipment->setObjectName("label_equipment");
        label_equipment->setGeometry(QRect(40, 30, 91, 21));
        label_typeOfFault = new QLabel(CreateRequestWindow);
        label_typeOfFault->setObjectName("label_typeOfFault");
        label_typeOfFault->setGeometry(QRect(20, 70, 111, 21));
        label_description = new QLabel(CreateRequestWindow);
        label_description->setObjectName("label_description");
        label_description->setGeometry(QRect(10, 100, 131, 41));
        pushButton_close = new QPushButton(CreateRequestWindow);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(300, 353, 80, 31));
        pushButton_create = new QPushButton(CreateRequestWindow);
        pushButton_create->setObjectName("pushButton_create");
        pushButton_create->setGeometry(QRect(210, 353, 80, 31));
        textEdit_description = new QTextEdit(CreateRequestWindow);
        textEdit_description->setObjectName("textEdit_description");
        textEdit_description->setGeometry(QRect(140, 120, 241, 221));
        textEdit_description->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: white; color: black;"));
        lineEdit_equipment = new QLineEdit(CreateRequestWindow);
        lineEdit_equipment->setObjectName("lineEdit_equipment");
        lineEdit_equipment->setGeometry(QRect(140, 30, 241, 24));
        lineEdit_equipment->setMaxLength(50);
        lineEdit_typeOfFault = new QLineEdit(CreateRequestWindow);
        lineEdit_typeOfFault->setObjectName("lineEdit_typeOfFault");
        lineEdit_typeOfFault->setGeometry(QRect(140, 70, 241, 24));
        lineEdit_typeOfFault->setMaxLength(50);

        retranslateUi(CreateRequestWindow);

        QMetaObject::connectSlotsByName(CreateRequestWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateRequestWindow)
    {
        CreateRequestWindow->setWindowTitle(QCoreApplication::translate("CreateRequestWindow", "CreateRequestWindow", nullptr));
        label_equipment->setText(QCoreApplication::translate("CreateRequestWindow", "  \320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_typeOfFault->setText(QCoreApplication::translate("CreateRequestWindow", "\320\242\320\270\320\277 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_description->setText(QCoreApplication::translate("CreateRequestWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213:", nullptr));
        pushButton_close->setText(QCoreApplication::translate("CreateRequestWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_create->setText(QCoreApplication::translate("CreateRequestWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRequestWindow: public Ui_CreateRequestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREQUESTWINDOW_H
