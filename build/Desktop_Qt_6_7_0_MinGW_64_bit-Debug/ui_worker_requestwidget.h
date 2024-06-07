/********************************************************************************
** Form generated from reading UI file 'worker_requestwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKER_REQUESTWIDGET_H
#define UI_WORKER_REQUESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkerRequestWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_status;
    QLabel *label;
    QLabel *label_requestID;
    QPushButton *pushButton_delete;
    QLabel *label_3;
    QPushButton *pushButton_done;
    QLabel *label_2;
    QLabel *label_equipment;
    QPushButton *pushButton_more;

    void setupUi(QWidget *WorkerRequestWidget)
    {
        if (WorkerRequestWidget->objectName().isEmpty())
            WorkerRequestWidget->setObjectName("WorkerRequestWidget");
        WorkerRequestWidget->resize(953, 150);
        gridLayout = new QGridLayout(WorkerRequestWidget);
        gridLayout->setObjectName("gridLayout");
        label_status = new QLabel(WorkerRequestWidget);
        label_status->setObjectName("label_status");

        gridLayout->addWidget(label_status, 1, 2, 1, 1);

        label = new QLabel(WorkerRequestWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_requestID = new QLabel(WorkerRequestWidget);
        label_requestID->setObjectName("label_requestID");

        gridLayout->addWidget(label_requestID, 1, 0, 1, 1);

        pushButton_delete = new QPushButton(WorkerRequestWidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setAutoDefault(false);

        gridLayout->addWidget(pushButton_delete, 2, 3, 1, 1);

        label_3 = new QLabel(WorkerRequestWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        pushButton_done = new QPushButton(WorkerRequestWidget);
        pushButton_done->setObjectName("pushButton_done");
        pushButton_done->setAutoDefault(false);

        gridLayout->addWidget(pushButton_done, 0, 3, 1, 1);

        label_2 = new QLabel(WorkerRequestWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_equipment = new QLabel(WorkerRequestWidget);
        label_equipment->setObjectName("label_equipment");

        gridLayout->addWidget(label_equipment, 1, 1, 1, 1);

        pushButton_more = new QPushButton(WorkerRequestWidget);
        pushButton_more->setObjectName("pushButton_more");
        pushButton_more->setAutoDefault(false);

        gridLayout->addWidget(pushButton_more, 1, 3, 1, 1);


        retranslateUi(WorkerRequestWidget);

        QMetaObject::connectSlotsByName(WorkerRequestWidget);
    } // setupUi

    void retranslateUi(QWidget *WorkerRequestWidget)
    {
        WorkerRequestWidget->setWindowTitle(QCoreApplication::translate("WorkerRequestWidget", "WorkerRequestWidget", nullptr));
        label_status->setText(QCoreApplication::translate("WorkerRequestWidget", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\217\320\262\320\272\320\270:", nullptr));
        label_requestID->setText(QCoreApplication::translate("WorkerRequestWidget", "TextLabel", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        pushButton_done->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\236\320\261\320\276\321\200\321\203\320\264\320\260\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_equipment->setText(QCoreApplication::translate("WorkerRequestWidget", "TextLabel", nullptr));
        pushButton_more->setText(QCoreApplication::translate("WorkerRequestWidget", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkerRequestWidget: public Ui_WorkerRequestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKER_REQUESTWIDGET_H
