#ifndef HEALTHASSESSMENTWINDOW_H
#define HEALTHASSESSMENTWINDOW_H

#include <QDialog>

namespace Ui {
class healthassessmentwindow;
}

class healthassessmentwindow : public QDialog {
    Q_OBJECT

public:
    explicit healthassessmentwindow(QWidget *parent = nullptr);
    ~healthassessmentwindow();

private slots:
    void on_submitAssessmentButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::healthassessmentwindow *ui;
};

#endif // HEALTHASSESSMENTWINDOW_H
