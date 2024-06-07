#ifndef CREATEREQUESTWINDOW_H
#define CREATEREQUESTWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class CreateRequestWindow;
}
QT_END_NAMESPACE

class CreateRequestWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit CreateRequestWindow(const QString& login, QWidget *parent = nullptr);
    ~CreateRequestWindow();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_create_clicked();

signals:
    void windowClosed();
    void needUpdate();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    QString userLogin;
    Ui::CreateRequestWindow* ui;
    void openDatabaseConnection();
};

#endif // CREATEREQUESTWINDOW_H
