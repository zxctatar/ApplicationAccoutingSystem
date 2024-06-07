#ifndef WORKERWINDOW_H
#define WORKERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class WorkerWindow;
}
QT_END_NAMESPACE

class WorkerWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit WorkerWindow(const QString& userLogin, QWidget *parent = nullptr);
    ~WorkerWindow();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_reload_clicked();
    void updateWindow();

private:
    QString userLogin;
    Ui::WorkerWindow *ui;
    void showRequests();
};

#endif // WORKERWINDOW_H
