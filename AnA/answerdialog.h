#ifndef ANSWERDIALOG_H
#define ANSWERDIALOG_H
#include <QDialog>
#include <QMessageBox>
#include "total.h"
#include "answer.h"

namespace Ui {
class AnswerDialog;
}

class AnswerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AnswerDialog(QWidget *parent = 0);
    ~AnswerDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::AnswerDialog *ui;
};

#endif // ANSWERDIALOG_H
