#ifndef REQUESTDESCRIPTIONWINDOW_H
#define REQUESTDESCRIPTIONWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class RequestDescriptionWindow;
}
QT_END_NAMESPACE

class RequestDescriptionWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit RequestDescriptionWindow(const QString& status, const int& applicationID, QWidget *parent = nullptr);
    ~RequestDescriptionWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_report_clicked();

signals:
    void windowClosed();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    void showDescription(const int& applicationID);
    Ui::RequestDescriptionWindow *ui;
    int applicationID;
};

#endif // REQUESTDESCRIPTIONWINDOW_H
