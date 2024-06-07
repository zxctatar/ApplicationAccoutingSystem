#ifndef CLIENT_REQUESTWIDGET_H
#define CLIENT_REQUESTWIDGET_H

#include <QWidget>
#include <ui_client_requestwidget.h>
#include <applicationdata.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class ClientRequestWidget;
}
QT_END_NAMESPACE

class ClientRequestWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ClientRequestWidget(const ApplicationData& data, QWidget *parent = nullptr);
    ~ClientRequestWidget();

private slots:
    void on_pushButton_more_clicked();
    void on_pushButton_edit_clicked();
    void on_pushButton_delete_clicked();

signals:
    void needUpdate();
    void widgetClose();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ClientRequestWidget *ui;
    int applicationID;
    QString equipment;
    QString status;
    void paintEvent(QPaintEvent *event);
};

#endif // CLIENT_REQUESTWIDGET_H
