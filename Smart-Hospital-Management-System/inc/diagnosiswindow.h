#ifndef DIAGNOSISWINDOW_H
#define DIAGNOSISWINDOW_H

#include <QDialog>

namespace Ui {
class DiagnosisWindow;
}

class DiagnosisWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DiagnosisWindow(QWidget *parent = nullptr);
    ~DiagnosisWindow();

private slots:
    void on_uploadButton_clicked(); // Slot for the upload button
    void on_returnButton_clicked();

private:
    Ui::DiagnosisWindow *ui; // Pointer to the UI
};

#endif // DIAGNOSISWINDOW_H

