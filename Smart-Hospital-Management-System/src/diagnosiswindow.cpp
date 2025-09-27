#include "diagnosiswindow.h"
#include "ui_diagnosiswindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>

DiagnosisWindow::DiagnosisWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiagnosisWindow)
{
    ui->setupUi(this); // Set up the UI

    // Set up the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db"); // Set the path to the database

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "无法连接到数据库: " + db.lastError().text());
        return; // Exit the constructor if the database cannot be opened
    }
}

DiagnosisWindow::~DiagnosisWindow()
{
    delete ui; // Clean up the UI
}

void DiagnosisWindow::on_uploadButton_clicked()
{
    // Get input values
    QString patientName = ui->patientfullnamelineEdit->text();
    QString patientContact = ui->patientcontactlineEdit->text();
    QString diagnosisName = ui->diagnosisnamelineEdit->text();
    QString diagnosisDescription = ui->diagnosisdescriptiontextEdit->toPlainText();

    // Validate inputs
    if (patientName.isEmpty() || patientContact.isEmpty() || diagnosisName.isEmpty() || diagnosisDescription.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "请填写所有字段."); // Show warning if inputs are empty
        return;
    }

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("INSERT INTO Diagnosis (patient_name, patient_contact, diagnosis_name, diagnosis_description) "
                  "VALUES (:patient_name, :patient_contact, :diagnosis_name, :diagnosis_description)");

    // Bind values to the query
    query.bindValue(":patient_name", patientName);
    query.bindValue(":patient_contact", patientContact);
    query.bindValue(":diagnosis_name", diagnosisName);
    query.bindValue(":diagnosis_description", diagnosisDescription);

    // Execute the query and check for success
    if (query.exec()) {
        QMessageBox::information(this, "Success", "诊断信息已成功提交并存储到数据库."); // Show success message
    } else {
        QMessageBox::warning(this, "Database Error", "无法提交诊断信息: " + query.lastError().text()); // Show error message
    }
}

void DiagnosisWindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}
