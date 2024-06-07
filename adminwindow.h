#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class AdminWindow;
}
QT_END_NAMESPACE

class AdminWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AdminWindow(const QString& UserLogin, QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void updateWindow();

    void on_pushButton_reload_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::AdminWindow *ui;
    void showRequests();
    QString userLogin;
};

#endif // ADMINWINDOW_H
