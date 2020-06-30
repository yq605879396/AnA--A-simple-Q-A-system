#include "operation.h"

/*operation类的函数定义*/

//登陆操作
int Operation::login(QString userIdString,QString passwordString)
{
    vector<User>:: iterator tmp=searcher->searchUserById(userIdString);
    if(tmp==userVector.end())
        return 0;
    else if(tmp->password!=passwordString)
        return 1;
    else
    {
        curUser=tmp;
        return 2;
    }
}

//获取系统时间操作
QString Operation::GetTime()
{
        time_t t = time(0);
        char tmp[64];
        strftime( tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&t) );
        return tmp;

}

//添加关注操作
void Operation::AddLike(int curQuestion)
{ //添加当前用户的偶像及偶像数量
   if(!(searcher->IfIn(questionVector[curQuestion].GetFounderID(),curUser->focusID)))//判断要关注的人（founderID）是否在已关注的容器列表中
 {   QString founderID=questionVector[curQuestion].GetFounderID();
    curUser->focusID.push_back(founderID);
    curUser->IncFocusNum();
  //添加被关注者的粉丝及粉丝数量
    vector<User>::iterator iter;
    iter=searcher->searchUserById(founderID);
    iter->fansID.push_back(curUser->ID);
    iter->IncFansNum();
    QMessageBox::information(NULL,"","Added successfully~~~^>.<^",QMessageBox::Yes);

}
    else  QMessageBox::information(NULL,"","You have already liked this person. ~@.@~",QMessageBox::Yes);
   // QMessageBox::information(NULL,"","Added successfully~~~^>.<^"+QString::number(curUser->GetFocusNum(),10)+QString::number(iter->GetFansNum(),10),QMessageBox::Yes);
   // QMessageBox::information(NULL,"",curUser->focusID[curUser->GetFocusNum()-1]+iter->fansID[iter->GetFansNum()-1],QMessageBox::Yes);
}

void Operation::AddNotice(int curQuestion)
{
     if(!(searcher->IfIn(questionVector[curQuestion].GetID(),curUser->noticeQuestionID)))//判断要关注的仁（founderID）是否在已关注的容器列表种
{//用户增加问题关注数并记录问题ID
curUser->IncNoticeNum();
curUser->noticeQuestionID.push_back(questionVector[curQuestion].GetID());
//问题添加被关注数
questionVector[curQuestion].IncNoticeNum();
QMessageBox::information(NULL,"","Noticed successfully~~~^>.<^",QMessageBox::Yes);}
     else QMessageBox::information(NULL,"","You have already noticed this question. ~@.@~",QMessageBox::Yes);
}
//问题点赞操作
 void Operation::IncPraiseByQueAndAnsNum(int curQuestion,int row){
     QString answerid;
     answerid=questionVector[curQuestion].accordAnswerVector[row];
     vector<Answer>::iterator iter;
     iter=searcher->searchAnswerById(answerid);
     iter->IncPraiseNum();

 }
 //int变量转换成string
 string int_to_str(int x){
     stringstream stream;
     stream << x;
     return stream.str();
 }


