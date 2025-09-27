#ifndef DOCTORWINDOW_H
#define DOCTORWINDOW_H

#include <QDialog>
#include <QStandardItemModel>
#include "editinfowindow.h"
#include "diagnosiswindow.h"
#include "photouploadwindow.h"
#include "communicationwindow.h"
#include "healthassessmentwindow.h"


namespace Ui {
class doctorwindow;
}

class doctorwindow : public QDialog
{
    Q_OBJECT

public:
    explicit doctorwindow(QWidget *parent = nullptr);
    ~doctorwindow();

private slots:
    void on_viewmedicalrecords_button_clicked(); // 按钮名称修改为小写
    void on_generatereport_button_clicked(); // 按钮名称修改为小写
    void on_viewappointments_button_clicked(); // 按钮名称修改为小写
    void on_editInfoButton_clicked(); // 编辑个人信息按钮槽函数
    void on_submitDiagnosisButton_clicked(); // 输入诊断按钮槽函数
    void on_photouploadButton_clicked();
    void on_communicationButton_clicked();
    void on_healthassessmentButton_clicked();
    void on_returnButton_clicked(); // 返回按钮槽函数


private:
    Ui::doctorwindow *ui;
    QStandardItemModel *appointmentsModel;
    QStandardItemModel *recordsModel;
    QStandardItemModel *reportModel;
    EditInfoWindow *editInfoWin;
    DiagnosisWindow *diagnosisWin;
    PhotoUploadWindow *photouploadWindow;
    communicationwindow *communicationWindow;
    healthassessmentwindow *healthassessmentWindow;



    void initializeTableViews();
};

#endif // DOCTORWINDOW_H
