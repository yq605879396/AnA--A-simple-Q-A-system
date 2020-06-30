#ifndef NOTICELISTDIALOG_H
#define NOTICELISTDIALOG_H

#include <QDialog>
#include "total.h"
#include "user.h"
#include "searcher.h"
namespace Ui {
class NoticeListDialog;
}

class NoticeListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NoticeListDialog(QWidget *parent = 0);
    ~NoticeListDialog();

private:
    Ui::NoticeListDialog *ui;
};

#endif // NOTICELISTDIALOG_H
