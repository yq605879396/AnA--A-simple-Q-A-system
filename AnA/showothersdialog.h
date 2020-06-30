#ifndef SHOWOTHERSDIALOG_H
#define SHOWOTHERSDIALOG_H

#include <QDialog>
#include <QDialog>
#include "total.h"
#include "operation.h"
#include "question.h"
#include "answer.h"
#include "questionandanswerlistdialog.h"
namespace Ui {
class ShowOthersDialog;
}

class ShowOthersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowOthersDialog(QWidget *parent = 0);
    ~ShowOthersDialog();
    void ShowAnswerList(QString ID);//根据用户ID输出其回答列表
    void ShowQuestionList(QString ID);//根据用户ID输出其提问列表

private:
    Ui::ShowOthersDialog *ui;
};

#endif // SHOWOTHERSDIALOG_H
