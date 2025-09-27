#ifndef INFORMATIONMANAGEMENTWINDOW_H
#define INFORMATIONMANAGEMENTWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTableView>

namespace Ui {
class informationmanagementwindow;
}

class informationmanagementwindow : public QDialog
{
    Q_OBJECT

public:
    explicit informationmanagementwindow(QWidget *parent = nullptr);
    ~informationmanagementwindow();

private slots:
    void on_viewDoctorInfoButton_clicked();
    void on_viewMedicalRecordsButton_clicked();
    void on_viewPrescriptionInfoButton_clicked();
    void on_viewPatientInfoButton_clicked();
    void on_viewAppointmentInfoButton_clicked();
    void on_refreshDataButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::informationmanagementwindow *ui;
    QSqlDatabase db;
    QSqlTableModel *modelDoctor;
    QSqlTableModel *modelPatient;
    QSqlTableModel *modelMedicalRecord;
    QSqlTableModel *modelAppointment;
    QSqlTableModel *modelDiagnosis;

    void setupDatabaseConnection();
    void loadTableData(QSqlTableModel *model, const QString &tableName, QTableView *tableView);
};

#endif // INFORMATIONMANAGEMENTWINDOW_H
