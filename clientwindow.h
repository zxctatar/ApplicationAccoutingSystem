#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <createrequestwindow.h>
#include <client_requestwidget.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class ClientWindow;
}
QT_END_NAMESPACE

class ClientWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ClientWindow(const QString& userLogin, QWidget *parent = nullptr);
    ~ClientWindow();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_createRequest_clicked();
    void updateWindow();
    void on_pushButton_reload_clicked();

private:
    QString userLogin;
    Ui::ClientWindow *ui;
    void showRequests(const QString& userLogin);
};

#endif // CLIENTWINDOW_H
