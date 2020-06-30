#include  "mainwindow.h"
#include  <QApplication>
#include  "login.h"
#include  "loaderandsaver.h"
#include  "user.h"
#include  "answer.h"
#include  "question.h"

using namespace std;

vector<User> userVector;
vector<Answer> answerVector;
vector<Question> questionVector;
Operation* operation;
Searcher* searcher;
LoaderAndSaver load;
//vector<User>::iterator iter;

vector<User>::iterator curUser;//=userVector.begin();
int questionNum=0;
int answerNum=0;
int userNum=0;
int curQuestion=0;
QString curCheckID="";
int main(int argc, char *argv[])
{  /* BasicInfo* b;
    b->Print();
    b=new Question;
    b->Print();
    b=new Answer;
    b->Print();*/
    load.LoadUserByFile();//载入用户信息
    load.LoadQuestionByFile();//载入问题信息
    load.LoadAnswerByFile();//载入回答信息
    QApplication a(argc, argv);
    while(true) {
        qDebug() << questionVector.size()<<endl;
        qDebug() << answerVector.size()<<endl;
        qDebug() << userVector.size()<<endl;
        login l;
        MainWindow* w=new MainWindow;
        if(l.exec() == QDialog::Accepted)
        {
            w->show();
            a.exec();
        }


    }
    return 0;
}
