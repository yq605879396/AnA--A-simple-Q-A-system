#ifndef ASKDIALOG_H
#define ASKDIALOG_H

#include <QDialog>
#include <QMessageBox.h>
#include <QTextstream.h>
#include <QString.h>
#include "total.h"
#include "user.h"
#include "question.h"
#include "operation.h"
namespace Ui {
class AskDialog;
}

class AskDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AskDialog(QWidget *parent = 0);
    ~AskDialog();

private slots:
    void on_pushButton_clicked();//清空
    void on_pushButton_2_clicked();//发表
    void on_pushButton_3_clicked();//返回

private:
    Ui::AskDialog *ui;
};

#endif // ASKDIALOG_H
