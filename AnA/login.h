#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "reg.h"
#include <QMessageBox.h>
#include "total.h"
#include "operation.h"
#include "search.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_RegisterButton_clicked();
    void on_LoginButtion_clicked();
private:
    Ui::login *ui;
};

#endif // LOGIN_H
