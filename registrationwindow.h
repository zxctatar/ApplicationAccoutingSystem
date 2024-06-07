#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QMainWindow>
#include <QRegularExpressionValidator>

QT_BEGIN_NAMESPACE
namespace Ui {
class RegistrationWindow;
}
QT_END_NAMESPACE

class RegistrationWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();

private slots:
    void on_pushButton_exit_clicked();
    void on_pushButton_create_clicked();

protected:
    void closeEvent(QCloseEvent* event) override;

signals:
    void windowClosed();

private:
    Ui::RegistrationWindow *ui;
    QRegularExpressionValidator* numberValidator;
};

#endif // REGISTRATIONWINDOW_H
