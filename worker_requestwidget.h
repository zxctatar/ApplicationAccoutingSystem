#ifndef WORKER_REQUESTWIDGET_H
#define WORKER_REQUESTWIDGET_H

#include <QWidget>
#include "applicationdata.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class WorkerRequestWidget;
}
QT_END_NAMESPACE

class WorkerRequestWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WorkerRequestWidget(const ApplicationData& data, QWidget *parent = nullptr);
    ~WorkerRequestWidget();

signals:
    void needUpdate();
    void widgetClose();

private slots:
    void on_pushButton_done_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_more_clicked();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    Ui::WorkerRequestWidget* ui;
    void paintEvent(QPaintEvent* event);
    int applicationID;
    QString equipment;
    QString status;
};

#endif // WORKER_REQUESTWIDGET_H
