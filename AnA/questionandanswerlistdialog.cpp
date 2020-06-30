#include "questionandanswerlistdialog.h"
#include "ui_questionandanswerlistdialog.h"

QuestionAndAnswerListDialog::QuestionAndAnswerListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionAndAnswerListDialog)
{
    ui->setupUi(this);
    ShowAnswerList();
    ShowQuestionList();
}

QuestionAndAnswerListDialog::~QuestionAndAnswerListDialog()
{
    delete ui;
}

//显示用户的回答列表
 void QuestionAndAnswerListDialog::ShowAnswerList(){
     ui->AnswerTable->setColumnCount(ColNum-1); //列数
     ui->AnswerTable->setRowCount(curUser->GetUserAnswerNum());//行数
     ui->AnswerTable->setHorizontalHeaderLabels(QStringList()  << "Content" << "QuestionID" << "Date" << "Like" );
     ui->AnswerTable->verticalHeader()->setVisible(false); // 隐藏水平header
     ui->AnswerTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
     ui->AnswerTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
     ui->AnswerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
     ui->AnswerTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式

   vector<Answer>::iterator qiter;//获得一个指向Answer类数组的迭代器
        for(int i=0;i < curUser->GetUserAnswerNum(); i++)
        {
             //通过用户ID从所有回答中找到自己的回答并输出
             qiter=searcher->searchAnswerById(curUser->answerQuestionID[i]);

             //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
             QTableWidgetItem *item_max = new QTableWidgetItem();
             item_max->setText(qiter->GetContent());
             item_max->setBackground(QBrush(QColor(Qt::lightGray)));
             item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
             ui->AnswerTable->setItem(i, 0, item_max);

              //QMessageBox::information(NULL,"",questionVector[i].GetContent(),QMessageBox::Yes);
             QTableWidgetItem *item_min = new QTableWidgetItem();
             item_min->setText(qiter->GetBelongQuestionID());
             item_min->setBackground(QBrush(QColor(Qt::lightGray)));
             item_min->setFlags(item_min->flags() & (~Qt::ItemIsEditable));
             ui->AnswerTable->setItem(i, 1, item_min);

             // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
             QTableWidgetItem *item_type = new QTableWidgetItem();
             item_type->setText(qiter->GetDate());
             item_type->setBackground(QBrush(QColor(Qt::lightGray)));
             item_type->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
             ui->AnswerTable->setItem(i, 2, item_type);

             // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
             QTableWidgetItem *item_typp = new QTableWidgetItem();
             item_typp->setText(QString::number(qiter->GetPraiseNum(),10));
             item_typp->setBackground(QBrush(QColor(Qt::lightGray)));
             item_typp->setFlags(item_typp->flags() & (~Qt::ItemIsEditable));
             ui->AnswerTable->setItem(i, 3, item_typp);
        }


     }


 //显示用户的问题列表 传入用户的ID
 void QuestionAndAnswerListDialog::ShowQuestionList()
{

 ui->QuestionTable->setColumnCount(ColNum); //列数
 ui->QuestionTable->setRowCount(curUser->GetQuestionNum());//行数
 ui->QuestionTable->setHorizontalHeaderLabels(QStringList()  << "Title" << "content" << "Date" << "Answer" << "Notice" );
 ui->QuestionTable->verticalHeader()->setVisible(false); // 隐藏水平header
 ui->QuestionTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
 ui->QuestionTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
 ui->QuestionTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
 ui->QuestionTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式

 vector<Question>::iterator iter;//获得一个指向question类数组的迭代器

    for(int i=0;i < curUser->GetQuestionNum(); i++)
    {
         //通过问题ID从所有回答中找到自己的会回答并输出
         iter=searcher->searchQuestionById(curUser->askQuestionID[i]);

         //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
         QTableWidgetItem *item_max = new QTableWidgetItem();
         item_max->setText(iter->GetTitle());
         item_max->setBackground(QBrush(QColor(Qt::lightGray)));
         item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
         ui->QuestionTable->setItem(i, 0, item_max);

          //QMessageBox::information(NULL,"",questionVector[i].GetContent(),QMessageBox::Yes);
         QTableWidgetItem *item_min = new QTableWidgetItem();
         item_min->setText(iter->GetContent());
         item_min->setBackground(QBrush(QColor(Qt::lightGray)));
         item_min->setFlags(item_min->flags() & (~Qt::ItemIsEditable));
         ui->QuestionTable->setItem(i, 1, item_min);

         // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
         QTableWidgetItem *item_tt = new QTableWidgetItem();
         item_tt->setText(iter->GetDate());
         item_tt->setBackground(QBrush(QColor(Qt::lightGray)));
         item_tt->setFlags(item_tt->flags() & (~Qt::ItemIsEditable));
         ui->QuestionTable->setItem(i, 2, item_tt);

         // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
         QTableWidgetItem *item_type = new QTableWidgetItem();
         item_type->setText(QString::number(iter->GetAnswerNum(),10));
         item_type->setBackground(QBrush(QColor(Qt::lightGray)));
         item_type->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
         ui->QuestionTable->setItem(i, 3, item_type);

         // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
         QTableWidgetItem *item_tpp = new QTableWidgetItem();
         item_tpp->setText(QString::number(iter->GetNoticeNum(),10));
         item_tpp->setBackground(QBrush(QColor(Qt::lightGray)));
         item_tpp->setFlags(item_tpp->flags() & (~Qt::ItemIsEditable));
         ui->QuestionTable->setItem(i, 4, item_tpp);}

}

