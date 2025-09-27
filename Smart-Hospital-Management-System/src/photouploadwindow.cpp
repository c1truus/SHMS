#include "photouploadwindow.h"  // 类头文件
#include "ui_photouploadwindow.h" // UI 头文件

PhotoUploadWindow::PhotoUploadWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhotoUploadWindow)
{
    ui->setupUi(this);
    photoList = new QListWidget(ui->photoscrollArea->widget()); // 在scrollArea中添加QListWidget
    ui->photoscrollArea->setWidget(photoList);
}

PhotoUploadWindow::~PhotoUploadWindow() {
    delete ui;
}

void PhotoUploadWindow::on_uploadphotoButton_clicked() {
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("选择照片"), "", tr("Images (*.png *.xpm *.jpg *.jpeg)"));
    if (!fileNames.isEmpty()) {
        foreach (const QString &fileName, fileNames) {
            QListWidgetItem *item = new QListWidgetItem(fileName);
            photoList->addItem(item);
        }
    }
}

void PhotoUploadWindow::on_checkphotoButton_clicked() {
    QListWidgetItem *currentItem = photoList->currentItem();
    if (currentItem) {
        QString filePath = currentItem->text();
        // 弹出窗口查看照片详情
        // 此处可以创建新的窗口并显示照片
        QMessageBox::information(this, tr("照片详情"), tr("选择的照片路径: ") + filePath);
    } else {
        QMessageBox::warning(this, tr("警告"), tr("请先选择一张照片！"));
    }
}

void PhotoUploadWindow::on_deletephotoButton_clicked() {
    QListWidgetItem *currentItem = photoList->currentItem();
    if (currentItem) {
        delete currentItem; // 删除选中的照片
    } else {
        QMessageBox::warning(this, tr("警告"), tr("请先选择一张照片！"));
    }
}

void PhotoUploadWindow::on_returnButton_clicked() {
    this->close(); // 返回医生界面，关闭当前对话框
}
