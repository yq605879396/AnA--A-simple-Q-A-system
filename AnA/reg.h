#ifndef REG_H
#define REG_H
#include <QString.h>
#include <QMessageBox.h>
#include <QTextstream.h>
#include <stdio.h>
#include <QDialog>
#include "total.h"
#include "user.h"
namespace Ui {
class reg;
}

class reg : public QDialog
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = 0);
    ~reg();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::reg *ui;
};

#endif // REG_H
