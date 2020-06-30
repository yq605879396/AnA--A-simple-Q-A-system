#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "askdialog.h"
#include "total.h"
#include "questiondetailsdialog.h"
#include "likelistdialog.h"
#include "questionandanswerlistdialog.h"
#include "noticelistdialog.h"
#include "login.h"
#include "loaderandsaver.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
   // void GotToQuestionDetailsDialog(int,int);
    void Fresh();
    void on_pushButton_clicked();
    void on_pushButton_6_clicked();
    void mySortByColumn(int column);//排序函数
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_tableWidget_cellDoubleClicked(int row, int column);
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_Search_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
