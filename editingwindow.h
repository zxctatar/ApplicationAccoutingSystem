#ifndef EDITINGWINDOW_H
#define EDITINGWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class EditingWindow;
}
QT_END_NAMESPACE

class EditingWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit EditingWindow(const int& applicationID, QWidget *parent = nullptr);
    ~EditingWindow();

signals:
    void windowClosed();
    void changeSave();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_save_clicked();

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    void showData();
    int applicationID;
    Ui::EditingWindow* ui;
};

#endif // EDITINGWINDOW_H
