#include "mainwindow.h"
#include "ui_mainwindow.h"

int tempPage=1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(ColNum);
    ui->tableWidget->setRowCount(RowNum);
    /* 设置 tableWidget */
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Title" << "Context" << "Founder" << "Date" << "anythingelse~" );
    ui->tableWidget->verticalHeader()->setVisible(false); // 隐藏水平header
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);   // 单个选中
    ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  // 可以选中多个
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置为只读
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
    Fresh();
    connect(ui->tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(mySortByColumn(int)));//升降序排序

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    AskDialog ad;
    ad.exec();
}


//刷新函数
void MainWindow::Fresh()
{
    //显示页数
    ui->TotalPage->setText(QString::number(questionPage,10));
    ui->TempPage->setText(QString::number(tempPage,10));

    int i=0;

    //逐行输入
    for(i=(tempPage-1)*RowNum;i < questionNum && i< tempPage*RowNum; i++)
    {
        //每行逐项输入内容
        //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(questionVector[i].GetTitle());
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 0, item_max);

        //QMessageBox::information(NULL,"",questionVector[i].GetContent(),QMessageBox::Yes);
        QTableWidgetItem *item_min = new QTableWidgetItem();
        item_min->setText(questionVector[i].GetContent());
        item_min->setBackground(QBrush(QColor(Qt::lightGray)));
        item_min->setFlags(item_min->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 1, item_min);

        // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
        QTableWidgetItem *item_type = new QTableWidgetItem();
        item_type->setText(questionVector[i].GetFounderID());
        item_type->setBackground(QBrush(QColor(Qt::lightGray)));
        item_type->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 2, item_type);

        //QMessageBox::information(NULL,"",questionVector[i].GetDate(),QMessageBox::Yes);
        QTableWidgetItem *item_mode = new QTableWidgetItem();
        item_mode->setText(questionVector[i].GetDate());
        item_mode->setBackground(QBrush(QColor(Qt::lightGray)));
        item_mode->setFlags(item_mode->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 3, item_mode);
    }

    //最后一页若没填满，则用空白item补齐
    while(i<tempPage*RowNum){
        for(int j=0;j<ColNum-1;j++)
        {  QTableWidgetItem *item_mode = new QTableWidgetItem();
            item_mode->setText("");
            item_mode->setBackground(QBrush(QColor(Qt::lightGray)));
            item_mode->setFlags(item_mode->flags() & (~Qt::ItemIsEditable));
            ui->tableWidget->setItem(i%RowNum, j, item_mode);
        }
        i++;
    }
}
//刷新按钮
void MainWindow::on_pushButton_6_clicked()
{
    Fresh();
}

//升降序排列
void MainWindow::mySortByColumn(int column)
{
    static bool f = true;
    ui->tableWidget->sortByColumn(column, f ? Qt::AscendingOrder : Qt::DescendingOrder);
    f = !f;
}

//下一页按钮
void MainWindow::on_pushButton_5_clicked()
{ if(tempPage<questionPage)
    tempPage++;
  else
    QMessageBox::information(NULL,"","No more pages!!! @.@",QMessageBox::Yes);
  Fresh();

}

//上一页按钮
void MainWindow::on_pushButton_4_clicked()
{
   if(tempPage>1)
        tempPage--;
    else
        QMessageBox::information(NULL,"","It is already the first page!!!@.@",QMessageBox::Yes);
    Fresh();

}

//点击查看某一个具体的问题
void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{   int j=(tempPage-1)*RowNum+row;
    curQuestion=j;
    QuestionDetailsDialog quesDetDia;
    quesDetDia.exec();
}

//查看回答列表
void MainWindow::on_pushButton_2_clicked()
{
QuestionAndAnswerListDialog ald;
ald.exec();
}

//查看用户关注与被关注列表
void MainWindow::on_pushButton_3_clicked()
{
    LikeListDialog lld;
    lld.exec();
}

//查看关注问题列表
void MainWindow::on_pushButton_7_clicked()
{
    NoticeListDialog nld;
    nld.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    load.SaveUserIntoFile(userVector);
    load.SaveQuestionIntoFile(questionVector);
    load.SaveAnswerIntoFile(answerVector);
}

//查找
void MainWindow::on_Search_clicked()
{
    vector<Question> outquestion;
    QString dateString=ui->DateText->text();
    QString titleString=ui->TitleText->text();
    if (dateString == ""&&titleString== "") {
        searcher->searchQuestion();
        Fresh();
    }//未输入则输出所有问题
    else if (dateString == "") {
          outquestion=searcher->searchQuestion(titleString,2);
    }//若只输入标题，则按标题查找
    else if (titleString == "") {
         outquestion=searcher->searchQuestion(dateString,1);
    }//若只输入日期，则按日期查找
    else outquestion=searcher->searchQuestion(titleString,dateString);
    //若都输入则按两者查找
    //显示页数
    int m=outquestion.size()/RowNum+1;
    ui->TotalPage->setText(QString::number(m,10));
    ui->TempPage->setText(QString::number(tempPage,10));

    int i=0;

    //逐行输入
    for(i=(tempPage-1)*RowNum;i < outquestion.size() && i< tempPage*RowNum; i++)
    {
        //每行逐项输入内容
        //QMessageBox::information(NULL,"",questionVector[i].GetTitle(),QMessageBox::Yes);
        QTableWidgetItem *item_max = new QTableWidgetItem();
        item_max->setText(outquestion[i].GetTitle());
        item_max->setBackground(QBrush(QColor(Qt::lightGray)));
        item_max->setFlags(item_max->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 0, item_max);

        //QMessageBox::information(NULL,"",questionVector[i].GetContent(),QMessageBox::Yes);
        QTableWidgetItem *item_min = new QTableWidgetItem();
        item_min->setText(outquestion[i].GetContent());
        item_min->setBackground(QBrush(QColor(Qt::lightGray)));
        item_min->setFlags(item_min->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 1, item_min);

        // QMessageBox::information(NULL,"",questionVector[i].GetFounderID(),QMessageBox::Yes);
        QTableWidgetItem *item_type = new QTableWidgetItem();
        item_type->setText(outquestion[i].GetFounderID());
        item_type->setBackground(QBrush(QColor(Qt::lightGray)));
        item_type->setFlags(item_type->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 2, item_type);

        //QMessageBox::information(NULL,"",questionVector[i].GetDate(),QMessageBox::Yes);
        QTableWidgetItem *item_mode = new QTableWidgetItem();
        item_mode->setText(outquestion[i].GetDate());
        item_mode->setBackground(QBrush(QColor(Qt::lightGray)));
        item_mode->setFlags(item_mode->flags() & (~Qt::ItemIsEditable));
        ui->tableWidget->setItem(i%RowNum, 3, item_mode);
    }

    //最后一页若没填满，则用空白item补齐
    while(i<tempPage*RowNum){
        for(int j=0;j<ColNum-1;j++)
        {  QTableWidgetItem *item_mode = new QTableWidgetItem();
            item_mode->setText("");
            item_mode->setBackground(QBrush(QColor(Qt::lightGray)));
            item_mode->setFlags(item_mode->flags() & (~Qt::ItemIsEditable));
            ui->tableWidget->setItem(i%RowNum, j, item_mode);
        }
        i++;
    }


}
