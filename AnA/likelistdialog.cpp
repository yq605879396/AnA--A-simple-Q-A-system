#include "likelistdialog.h"
#include "ui_likelistdialog.h"

/*输出关注列表页面*/

LikeListDialog::LikeListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LikeListDialog)
{
    ui->setupUi(this);
    //设置关注列表
    ui->FocusTable->setColumnCount(1);
    ui->FocusTable->setRowCount(curUser->GetFocusNum());
    ui->FocusTable->setHorizontalHeaderLabels(QStringList()  << "I like them: " );
    ui->FocusTable->verticalHeader()->setVisible(false); // 隐藏水平header
    ui->FocusTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
    ui->FocusTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
    ui->FocusTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
    ui->FocusTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
    //设置粉丝数、偶像数显示
    ui->FansNum->setText(QString::number(curUser->GetFansNum(),10));
    ui->LikeNum->setText(QString::number(curUser->GetFocusNum(),10));

    //一个一个输出偶像信息
    for (int i=0;i<curUser->GetFocusNum();i++)
    {
        //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(curUser->focusID[i]);
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->FocusTable->setItem(i, 0, item_max);
    }

    //设置被关注列表
    ui->FansTable->setColumnCount(1);
    ui->FansTable->setRowCount(curUser->GetFansNum());
    ui->FansTable->setHorizontalHeaderLabels(QStringList()  << "They like me: " );
    ui->FansTable->verticalHeader()->setVisible(false); // 隐藏水平header
    ui->FansTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
    ui->FansTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
    ui->FansTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
    ui->FansTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式

    //一个一个输出粉丝信息
    for (int i=0;i<curUser->GetFansNum();i++)
    {
        //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(curUser->fansID[i]);
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->FansTable->setItem(i, 0, item_max);
    }
}

LikeListDialog::~LikeListDialog()
{
    delete ui;
}

void LikeListDialog::on_FocusTable_cellDoubleClicked(int row, int column)
{
     curCheckID=curUser->focusID[row];
     ShowOthersDialog sod;
     sod.exec();
}

void LikeListDialog::on_FansTable_cellDoubleClicked(int row, int column)
{
    curCheckID=curUser->fansID[row];
    ShowOthersDialog sod;
    sod.exec();
}
