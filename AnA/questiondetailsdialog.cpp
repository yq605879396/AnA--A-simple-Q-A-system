#include "questiondetailsdialog.h"
#include "ui_questiondetailsdialog.h"

/*问题详细信息页面*/

QuestionDetailsDialog::QuestionDetailsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionDetailsDialog)
{ // qDebug()<< questionVector[curQuestion].GetAnswerNum();
    for(int i=0;i<questionVector[curQuestion].GetAnswerNum();i++){

   //qDebug()<< questionVector[curQuestion].accordAnswerVector[i];//
    }

    ui->setupUi(this);
    ui->FounderID->setText(questionVector[curQuestion].GetFounderID());
    ui->FoundDate->setText(questionVector[curQuestion].GetDate());
    ui->TitleText->setText(questionVector[curQuestion].GetTitle());
    ui->ContentText->setText(questionVector[curQuestion].GetContent());
    ui->FansNum->setText(QString::number(searcher->GetFansNumByQuestionVectorNum(curQuestion),10));
    ui->NoticeNum->setText(QString::number(questionVector[curQuestion].GetNoticeNum(),10));

    //设置回答列表
    ui->AnswerTable->setColumnCount(ColNum);
    ui->AnswerTable->setRowCount(questionVector[curQuestion].GetAnswerNum());
    /* 设置 tableWidget */
    ui->AnswerTable->setHorizontalHeaderLabels(QStringList()  << "Content" << "Founder" << "Date" <<"Praise Num"<< "Like" );
    ui->AnswerTable->verticalHeader()->setVisible(false); // 隐藏水平header
    ui->AnswerTable->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
    ui->AnswerTable->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
    ui->AnswerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
    ui->AnswerTable->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
    Fresh();

}


//刷新
void QuestionDetailsDialog::Fresh()
{
    ui->AnswerTable->setRowCount(questionVector[curQuestion].GetAnswerNum());
    vector<Answer>::iterator iter;

    for(int i=0;i < questionVector[curQuestion].GetAnswerNum(); i++)
    {
        //添加点赞按钮
        QPushButton * pBtn = new QPushButton();
        pBtn->setText("like");
        connect(pBtn, SIGNAL(clicked()), this, SLOT(OnBtnClicked()));
        ui->AnswerTable->setCellWidget(i,ColNum-1,pBtn);

        //填写一行中各项内容
        iter=searcher->searchAnswerById(questionVector[curQuestion].accordAnswerVector[i]);
       // qDebug()<< iter->GetContent() <<curQuestion;//
        //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(iter->GetContent());
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->AnswerTable->setItem(i, 0, item_max);

        //QMessageBox::information(NULL,"",questionVector[i].GetContent(),QMessageBox::Yes);
        QTableWidgetItem *item_min = new QTableWidgetItem();
        item_min->setText(iter->GetFounderID());
        item_min->setBackground(QBrush(QColor(Qt::lightGray)));
        item_min->setFlags(item_min->flags() & (~Qt::ItemIsEditable));
        ui->AnswerTable->setItem(i, 1, item_min);

        // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
        QTableWidgetItem *item_type = new QTableWidgetItem();
        item_type->setText(iter->GetDate());
        item_type->setBackground(QBrush(QColor(Qt::lightGray)));
        item_type->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
        ui->AnswerTable->setItem(i, 2, item_type);

        // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
        QTableWidgetItem *item_pra= new QTableWidgetItem();
        item_pra->setText(QString::number(iter->GetPraiseNum(),10));
        item_pra->setBackground(QBrush(QColor(Qt::lightGray)));
        item_pra->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
        ui->AnswerTable->setItem(i, 3, item_pra);

    }
}

QuestionDetailsDialog::~QuestionDetailsDialog()
{
    delete ui;
}

//添加关注按钮
void QuestionDetailsDialog::on_AddLike_clicked()
{
    operation->AddLike(curQuestion);

}

//返回按钮
void QuestionDetailsDialog::on_pushButton_clicked()
{
    accept();
}

//回答问题按钮
void QuestionDetailsDialog::on_AddAnswer_clicked()
{
    AnswerDialog answer;
    answer.exec();
}

//刷新按钮
void QuestionDetailsDialog::on_Fresh_clicked()
{
    Fresh();
    ui->FansNum->setText(QString::number(searcher->GetFansNumByQuestionVectorNum(curQuestion),10));
    ui->NoticeNum->setText(QString::number(questionVector[curQuestion].GetNoticeNum(),10));
}

//用户添加问题关注
void QuestionDetailsDialog::on_AddNotice_clicked()
{
     operation->AddNotice(curQuestion);

}

//点赞按钮
void QuestionDetailsDialog::OnBtnClicked(void)
{
    QPushButton * senderObj=qobject_cast<QPushButton *>(sender());
    if(senderObj == 0)
    {
        return;
    }
    QModelIndex index =ui->AnswerTable->indexAt(QPoint(senderObj->frameGeometry().x(),senderObj->frameGeometry().y()));
    int row=index.row();
    operation->IncPraiseByQueAndAnsNum(curQuestion,row);
    // qDebug()<<"row:"<<row;
}
