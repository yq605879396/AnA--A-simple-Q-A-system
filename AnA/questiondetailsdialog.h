#ifndef QUESTIONDETAILSDIALOG_H
#define QUESTIONDETAILSDIALOG_H

#include <QDialog>
#include "total.h"
#include "question.h"
#include "searcher.h"
#include "user.h"
#include "answerdialog.h"
#include "operation.h"
namespace Ui {
class QuestionDetailsDialog;
}

class QuestionDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionDetailsDialog(QWidget *parent = 0);
    ~QuestionDetailsDialog();


private slots:
    void on_AddLike_clicked();
    void OnBtnClicked(void);
    void on_pushButton_clicked();
    void on_AddAnswer_clicked();
    void Fresh();
    void on_Fresh_clicked();
    void on_AddNotice_clicked();

private:
    Ui::QuestionDetailsDialog *ui;
};

#endif // QUESTIONDETAILSDIALOG_H
