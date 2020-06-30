#include "basicinfo.h"
BasicInfo::BasicInfo(){}
QString BasicInfo::GetID(){return ID;}
QString BasicInfo::GetFounderID(){return founderID;}
QString BasicInfo::GetDate(){return date;}
QString BasicInfo::GetContent(){return content;}
void BasicInfo::Print(){
    qDebug () << "BasicInfo::Print" << endl;
}
