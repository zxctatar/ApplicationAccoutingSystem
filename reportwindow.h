#ifndef REPORTWINDOW_H
#define REPORTWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class ReportWindow;
}
QT_END_NAMESPACE

class ReportWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ReportWindow(const int& applicationID, QWidget *parent = nullptr);
    ~ReportWindow();

signals:
    void windowClosed();

private slots:
    void on_pushButton_close_clicked();

private:
    Ui::ReportWindow* ui;
    void closeEvent(QCloseEvent* event);
    void showReport(const int& applicationID);
};

#endif // REPORTWINDOW_H
