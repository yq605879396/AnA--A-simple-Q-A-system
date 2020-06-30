#include "noticelistdialog.h"
#include "ui_noticelistdialog.h"

/*输出关注问题列表页面*/

NoticeListDialog::NoticeListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoticeListDialog)
{
    //设置界面
    ui->setupUi(this);
    ui->NoticeTable->setColumnCount(1);
    ui->NoticeTable->setRowCount(curUser->GetNoticeNum());
    ui->NoticeTable->setHorizontalHeaderLabels(QStringList()  << "I concern these: " );
    ui->NoticeTable->verticalHeader()->setVisible(false); // 隐藏水平header
    ui->NoticeTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
    ui->NoticeTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
    ui->NoticeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
    ui->NoticeTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
    //设置粉丝数、偶像数显示
    ui->NoticeNum->setText(QString::number(curUser->GetNoticeNum(),10));

    //逐行输出关注的问题标题
    for (int i=0;i<curUser->GetNoticeNum();i++)
    {
        QString questionid=curUser->noticeQuestionID[i];
        vector<Question>::iterator iter;
        iter=searcher->searchQuestionById(questionid);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(iter->GetTitle());
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->NoticeTable->setItem(i, 0, item_max);
    }
}

NoticeListDialog::~NoticeListDialog()
{
    delete ui;
}
