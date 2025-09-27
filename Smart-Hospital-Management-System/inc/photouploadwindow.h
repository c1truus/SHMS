#ifndef PHOTOUPLOADWINDOW_H
#define PHOTOUPLOADWINDOW_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QListWidgetItem>

namespace Ui {
class PhotoUploadWindow;
}

class PhotoUploadWindow : public QDialog {
    Q_OBJECT

public:
    explicit PhotoUploadWindow(QWidget *parent = nullptr);
    ~PhotoUploadWindow();

private slots:
    void on_uploadphotoButton_clicked();
    void on_checkphotoButton_clicked();
    void on_deletephotoButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::PhotoUploadWindow *ui;
    QListWidget *photoList; // 用于显示照片的列表
};

#endif // PHOTOUPLOADWINDOW_H
