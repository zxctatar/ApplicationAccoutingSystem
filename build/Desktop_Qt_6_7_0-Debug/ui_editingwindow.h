/********************************************************************************
** Form generated from reading UI file 'editingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINGWINDOW_H
#define UI_EDITINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditingWindow
{
public:
    QTextEdit *textEdit_description;
    QLabel *label_description;
    QPushButton *pushButton_close;
    QPushButton *pushButton_save;
    QLabel *label_typeOfFault;
    QLineEdit *lineEdit_typeOfFault;
    QLineEdit *lineEdit_equipment;
    QLabel *label_equipment;

    void setupUi(QWidget *EditingWindow)
    {
        if (EditingWindow->objectName().isEmpty())
            EditingWindow->setObjectName("EditingWindow");
        EditingWindow->resize(450, 400);
        EditingWindow->setMinimumSize(QSize(450, 400));
        EditingWindow->setMaximumSize(QSize(450, 400));
        EditingWindow->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: #ffffff;"));
        textEdit_description = new QTextEdit(EditingWindow);
        textEdit_description->setObjectName("textEdit_description");
        textEdit_description->setGeometry(QRect(180, 120, 241, 221));
        textEdit_description->setStyleSheet(QString::fromUtf8(""));
        label_description = new QLabel(EditingWindow);
        label_description->setObjectName("label_description");
        label_description->setGeometry(QRect(20, 100, 151, 41));
        pushButton_close = new QPushButton(EditingWindow);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(340, 353, 80, 31));
        pushButton_save = new QPushButton(EditingWindow);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(250, 353, 80, 31));
        label_typeOfFault = new QLabel(EditingWindow);
        label_typeOfFault->setObjectName("label_typeOfFault");
        label_typeOfFault->setGeometry(QRect(30, 70, 141, 21));
        lineEdit_typeOfFault = new QLineEdit(EditingWindow);
        lineEdit_typeOfFault->setObjectName("lineEdit_typeOfFault");
        lineEdit_typeOfFault->setGeometry(QRect(180, 70, 241, 24));
        lineEdit_typeOfFault->setMaxLength(50);
        lineEdit_equipment = new QLineEdit(EditingWindow);
        lineEdit_equipment->setObjectName("lineEdit_equipment");
        lineEdit_equipment->setGeometry(QRect(180, 30, 241, 24));
        lineEdit_equipment->setMaxLength(50);
        label_equipment = new QLabel(EditingWindow);
        label_equipment->setObjectName("label_equipment");
        label_equipment->setGeometry(QRect(50, 30, 121, 21));

        retranslateUi(EditingWindow);

        QMetaObject::connectSlotsByName(EditingWindow);
    } // setupUi

    void retranslateUi(QWidget *EditingWindow)
    {
        EditingWindow->setWindowTitle(QCoreApplication::translate("EditingWindow", "EditingWindow", nullptr));
        label_description->setText(QCoreApplication::translate("EditingWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213:", nullptr));
        pushButton_close->setText(QCoreApplication::translate("EditingWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_save->setText(QCoreApplication::translate("EditingWindow", "C\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_typeOfFault->setText(QCoreApplication::translate("EditingWindow", "\320\242\320\270\320\277 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270:", nullptr));
        label_equipment->setText(QCoreApplication::translate("EditingWindow", "  \320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditingWindow: public Ui_EditingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINGWINDOW_H
