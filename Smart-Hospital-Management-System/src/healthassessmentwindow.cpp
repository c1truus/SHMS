#include "healthassessmentwindow.h"
#include "ui_healthassessmentwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

healthassessmentwindow::healthassessmentwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::healthassessmentwindow) {
    ui->setupUi(this);
}

healthassessmentwindow::~healthassessmentwindow() {
    delete ui;
}

void healthassessmentwindow::on_submitAssessmentButton_clicked() {
    // 获取输入数据
    QString name = ui->namelineEdit->text();
    QString height = ui->heightlineEdit->text();
    QString weight = ui->weightlineEdit->text();
    QString heartRate = ui->heartratelineEdit->text();
    QString assessmentContent = ui->assessmentTextEdit->toPlainText();

    // 打开数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db");

    if (!db.open()) {
        QMessageBox::critical(this, "数据库错误", "无法连接到数据库: " + db.lastError().text());
        return;
    }

    // 准备 SQL 插入语句
    QSqlQuery query;
    query.prepare("INSERT INTO health_assessment (patient_name, height, weight, heart_rate, assessment_content) "
                  "VALUES (:name, :height, :weight, :heart_rate, :assessment_content)");

    // 绑定参数
    query.bindValue(":name", name);
    query.bindValue(":height", height.toDouble());
    query.bindValue(":weight", weight.toDouble());
    query.bindValue(":heart_rate", heartRate.toInt());
    query.bindValue(":assessment_content", assessmentContent);

    // 执行插入操作并检查是否成功
    if (query.exec()) {
        QMessageBox::information(this, "提交成功", "健康评估内容已成功提交！");
    } else {
        QMessageBox::critical(this, "提交失败", "提交数据时发生错误: " + query.lastError().text());
    }

    // 关闭数据库连接
    db.close();
}

void healthassessmentwindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}
