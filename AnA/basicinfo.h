#ifndef BASICINFO_H
#define BASICINFO_H
#include "total.h"
//问题和回答的基础信息
class BasicInfo
{
protected:
    QString ID;
    QString founderID;
    QString date;
    QString content;
public:
    virtual void Print();
    BasicInfo();
    BasicInfo(QString id,QString founderid,QString datee,QString contentt):ID(id),founderID(founderid),date(datee), content(contentt){}
    QString GetID();
    QString GetFounderID();
    QString GetDate();
    QString GetContent();
};
#endif // BASICINFO_H
