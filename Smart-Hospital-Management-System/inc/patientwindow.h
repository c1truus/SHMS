#ifndef PATIENTWINDOW_H
#define PATIENTWINDOW_H

#include <QDialog>
#include <QStandardItemModel>
#include "editinfowindow.h"
#include "appointmentswindow.h"
#include "communicationwindow.h"
#include "dbmanager.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>


namespace Ui {
class patientwindow;
}

class patientwindow : public QDialog
{
    Q_OBJECT

public:
    explicit patientwindow(QWidget *parent = nullptr);
    ~patientwindow();

private slots:
    void on_editInfoButton_clicked();
    void on_viewDoctorsButton_clicked();
    void on_makeAppointmentButton_clicked();
    void on_viewMedicalRecordsButton_clicked();
    void on_checkdiagnosisButton_clicked();
    void on_communicationButton_clicked();
    void on_phototableView_clicked(const QModelIndex &index);
    void on_returnButton_clicked();

private:
    Ui::patientwindow *ui;
    QStandardItemModel *appointmentsModel;
    QStandardItemModel *recordsModel;
    QStandardItemModel *reportModel;
    QStandardItemModel *doctorsModel;
    QStandardItemModel *diagnosisModel;
    QStandardItemModel *photoModel;
    EditInfoWindow *editInfoWin;

    void initializeTableViews();
};

#endif // PATIENTWINDOW_H
