#ifndef QUESTIONANDANSWERLISTDIALOG_H
#define QUESTIONANDANSWERLISTDIALOG_H

#include <QDialog>
#include "total.h"
#include "operation.h"
#include "question.h"
#include "answer.h"
namespace Ui {
class QuestionAndAnswerListDialog;
}

class QuestionAndAnswerListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionAndAnswerListDialog(QWidget *parent = 0);
    ~QuestionAndAnswerListDialog();
    void ShowAnswerList();//根据用户ID输出其回答列表
    void ShowQuestionList();//根据用户ID输出其提问列表

private:
    Ui::QuestionAndAnswerListDialog *ui;
};

#endif // QUESTIONANDANSWERLISTDIALOG_H
