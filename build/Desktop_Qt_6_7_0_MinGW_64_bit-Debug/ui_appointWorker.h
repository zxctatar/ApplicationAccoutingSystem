/********************************************************************************
** Form generated from reading UI file 'appointWorker.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTWORKER_H
#define UI_APPOINTWORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppointWorker
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton_close;
    QPushButton *pushButton_appoint;

    void setupUi(QMainWindow *AppointWorker)
    {
        if (AppointWorker->objectName().isEmpty())
            AppointWorker->setObjectName("AppointWorker");
        AppointWorker->resize(400, 400);
        AppointWorker->setMinimumSize(QSize(400, 400));
        AppointWorker->setMaximumSize(QSize(400, 400));
        centralwidget = new QWidget(AppointWorker);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(70, 50, 271, 24));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(230, 330, 111, 41));
        pushButton_appoint = new QPushButton(centralwidget);
        pushButton_appoint->setObjectName("pushButton_appoint");
        pushButton_appoint->setGeometry(QRect(70, 330, 111, 41));
        AppointWorker->setCentralWidget(centralwidget);

        retranslateUi(AppointWorker);

        QMetaObject::connectSlotsByName(AppointWorker);
    } // setupUi

    void retranslateUi(QMainWindow *AppointWorker)
    {
        AppointWorker->setWindowTitle(QCoreApplication::translate("AppointWorker", "AppointWorker", nullptr));
        pushButton_close->setText(QCoreApplication::translate("AppointWorker", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_appoint->setText(QCoreApplication::translate("AppointWorker", "\320\235\320\260\320\267\320\275\320\260\321\207\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppointWorker: public Ui_AppointWorker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTWORKER_H
