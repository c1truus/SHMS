// appointmentswindow.h
#ifndef APPOINTMENTSWINDOW_H
#define APPOINTMENTSWINDOW_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class appointmentswindow;
}

class appointmentswindow : public QDialog
{
    Q_OBJECT

public:
    explicit appointmentswindow(QWidget *parent = nullptr);
    ~appointmentswindow();

private slots:
    void on_confirmButton_clicked();
    void on_cancelButton_clicked();
    void on_refreshButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::appointmentswindow *ui;
    QStandardItemModel *appointmentsModel;

    void refreshAppointmentList();
};

#endif // APPOINTMENTSWINDOW_H
