#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();
    void on_pushButton_registration_clicked();

private:
    Ui::LoginWindow *ui;
    QWidget* createAccountWindow(const QString& userType, const QRect& geometry);
};

#endif // LOGINWINDOW_H
