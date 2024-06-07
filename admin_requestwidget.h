#ifndef ADMIN_REQUESTWIDGET_H
#define ADMIN_REQUESTWIDGET_H

#include <QWidget>
#include <applicationdata.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class AdminRequestWidget;
}
QT_END_NAMESPACE

class AdminRequestWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AdminRequestWidget(const int& adminID, const ApplicationData& data, QWidget *parent = nullptr);
    ~AdminRequestWidget();

signals:
    void needUpdate();
    void widgetClosed();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_pushButton_appoint_clicked();
    void on_pushButton_more_clicked();
    void on_pushButton_delete_clicked();

private:
    Ui::AdminRequestWidget* ui;
    int applicationID;
    QString equipment;
    QString status;
    void paintEvent(QPaintEvent* event);
    void showRequests();
    int adminID;
};

#endif // ADMIN_REQUESTWIDGET_H
