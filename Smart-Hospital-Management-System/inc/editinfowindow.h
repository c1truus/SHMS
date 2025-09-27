#ifndef EDITINFOWINDOW_H
#define EDITINFOWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class EditInfoWindow;
}

class EditInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditInfoWindow(QWidget *parent = nullptr);
    ~EditInfoWindow();

private slots:
    void on_confirmeditButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::EditInfoWindow *ui;
    void loadUserInfo(); // 用于加载现有用户信息
    int userId;          // 当前用户的ID
};

#endif // EDITINFOWINDOW_H
