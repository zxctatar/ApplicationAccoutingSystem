#ifndef APPOINTWORKERWINDOW_H
#define APPOINTWORKERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class AppointWorkerWindow;
}
QT_END_NAMESPACE

class AppointWorkerWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppointWorkerWindow(const int& adminID, const int& applicationID, QWidget *parent = nullptr);
    ~AppointWorkerWindow();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_appoint_clicked();

signals:
    void windowClosed();
    void changeSave();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    Ui::AppointWorkerWindow* ui;
    void fillWorkers();
    void appoint(const int& workerID);
    int applicationID;
    int adminID;
};

#endif // APPOINTWORKERWINDOW_H
