#ifndef LIKELISTDIALOG_H
#define LIKELISTDIALOG_H

#include <QDialog>
#include "total.h"
#include "user.h"
#include "showothersdialog.h"
namespace Ui {
class LikeListDialog;
}

class LikeListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LikeListDialog(QWidget *parent = 0);
    ~LikeListDialog();

private slots:
    void on_FocusTable_cellDoubleClicked(int row, int column);

    void on_FansTable_cellDoubleClicked(int row, int column);

private:
    Ui::LikeListDialog *ui;
};

#endif // LIKELISTDIALOG_H
