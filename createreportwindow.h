#ifndef CREATEREPORTWINDOW_H
#define CREATEREPORTWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui{
class CreateReportWindow;
}
QT_END_NAMESPACE

class CreateReportWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit CreateReportWindow(const int& applicationID, QWidget *parent = nullptr);
    ~CreateReportWindow();

signals:
    void windowClosed();
    void needUpdate();

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_done_clicked();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    Ui::CreateReportWindow* ui;
    int applicationID;
};

#endif // CREATEREPORTWINDOW_H
