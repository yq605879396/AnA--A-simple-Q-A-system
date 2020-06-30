#ifndef ANSWER_H
#define ANSWER_H


#include "operation.h"
#include "basicinfo.h"
#include <QString>
#include <iostream>
#include <sstream>
#include <fstream>


//class Operation;
class Answer: public BasicInfo
{
   private:
        QString belongQuestionID;//对应问题的ID
        int praiseNum;//点赞数

   public:
      Answer();
      Answer(QString content);
      int GetPraiseNum();
      void IncPraiseNum();
      void virtual Print();
      QString GetBelongQuestionID();
      friend QTextStream & operator << (QTextStream &out, Answer &w);
      friend QTextStream & operator >> (QTextStream &in, Answer &w);

};

#endif // ANSWER_H
