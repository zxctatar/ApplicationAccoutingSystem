/********************************************************************************
** Form generated from reading UI file 'requestwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTWIDGET_H
#define UI_REQUESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_equipment;
    QPushButton *pushButton_delete;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_status;
    QPushButton *pushButton_more;
    QPushButton *pushButton_edit;
    QLabel *label_requestID;

    void setupUi(QWidget *RequestWidget)
    {
        if (RequestWidget->objectName().isEmpty())
            RequestWidget->setObjectName("RequestWidget");
        RequestWidget->resize(953, 150);
        gridLayout = new QGridLayout(RequestWidget);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(RequestWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_equipment = new QLabel(RequestWidget);
        label_equipment->setObjectName("label_equipment");

        gridLayout->addWidget(label_equipment, 1, 1, 1, 1);

        pushButton_delete = new QPushButton(RequestWidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setAutoDefault(false);

        gridLayout->addWidget(pushButton_delete, 2, 3, 1, 1);

        label_2 = new QLabel(RequestWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(RequestWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_status = new QLabel(RequestWidget);
        label_status->setObjectName("label_status");

        gridLayout->addWidget(label_status, 1, 2, 1, 1);

        pushButton_more = new QPushButton(RequestWidget);
        pushButton_more->setObjectName("pushButton_more");
        pushButton_more->setAutoDefault(false);

        gridLayout->addWidget(pushButton_more, 0, 3, 1, 1);

        pushButton_edit = new QPushButton(RequestWidget);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setAutoDefault(false);

        gridLayout->addWidget(pushButton_edit, 1, 3, 1, 1);

        label_requestID = new QLabel(RequestWidget);
        label_requestID->setObjectName("label_requestID");

        gridLayout->addWidget(label_requestID, 1, 0, 1, 1);


        retranslateUi(RequestWidget);

        QMetaObject::connectSlotsByName(RequestWidget);
    } // setupUi

    void retranslateUi(QWidget *RequestWidget)
    {
        RequestWidget->setWindowTitle(QCoreApplication::translate("RequestWidget", "RequestWidget", nullptr));
        label_3->setText(QCoreApplication::translate("RequestWidget", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        label_equipment->setText(QCoreApplication::translate("RequestWidget", "TextLabel", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("RequestWidget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("RequestWidget", "\320\236\320\261\320\276\321\200\321\203\320\264\320\260\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label->setText(QCoreApplication::translate("RequestWidget", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\217\320\262\320\272\320\270:", nullptr));
        label_status->setText(QCoreApplication::translate("RequestWidget", "TextLabel", nullptr));
        pushButton_more->setText(QCoreApplication::translate("RequestWidget", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("RequestWidget", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_requestID->setText(QCoreApplication::translate("RequestWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestWidget: public Ui_RequestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTWIDGET_H
