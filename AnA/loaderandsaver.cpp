#include "loaderandsaver.h"

/*LoaderAndSaver类的函数定义*/

//从文件中读取用户信息
void LoaderAndSaver::LoadUserByFile()
{
    try{
        QFile infile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/user.txt");
        QTextStream in(&infile);
        if(!infile.open(QIODevice::ReadOnly | QIODevice::Text)) {//打开失败
        throw "File can not be opened.";
        }
        else
        {
            while(!in.atEnd()){
                User tempt;
                in >> tempt;
                userVector.push_back(tempt);
                userNum++;
                infile.close();
            }
        }
    }
    catch (char*r)
        {
        qDebug () << "File can not be opened.";
        std::cout << r <<std::endl;
        exit(1);
    }
}


//从文件中读取问题信息
void LoaderAndSaver::LoadQuestionByFile()
{
    QFile infile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/question.txt");
    QTextStream in(&infile);
    if(!infile.open(QIODevice::ReadOnly | QIODevice::Text))
    {//打开失败
        QMessageBox::information(NULL,"Warning","File can not be opened.",QMessageBox::Yes);
        return ;
    }
    else{
        while(!in.atEnd()){
            Question tempt;
            in >> tempt ;
           // for(int i=0;i<tempt.GetAnswerNum();i++){
           // qDebug()<< tempt.accordAnswerVector[i]<<endl;}
            questionVector.push_back(tempt);
            questionNum++;
        }
        // QMessageBox::information(NULL,"Warning","open questionfile successfully.",QMessageBox::Yes);
    }
   infile.close();
}



//从文件中读取回答信息
void LoaderAndSaver::LoadAnswerByFile()
{
    QFile infile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/answer.txt");
    QTextStream in(&infile);
    if(!infile.open(QIODevice::ReadOnly | QIODevice::Text))
    {//打开失败
        QMessageBox::information(NULL,"Warning","File can not be opened.",QMessageBox::Yes);
        return ;
    }
    else{
        while(!in.atEnd()){
            Answer tempt;
            in >>tempt;
            answerVector.push_back(tempt);
            answerNum++;
        }
        //  QMessageBox::information(NULL,"Warning","open questionfile successfully.",QMessageBox::Yes);
    }
   infile.close();
}


//存用户信息到文件中
void LoaderAndSaver::SaveUserIntoFile(vector<User> v)
{
    QFile outfile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/user.txt");
    QTextStream out(&outfile);
    if(!outfile.open(QIODevice::WriteOnly | QIODevice::Text)) {//打开失败
        QMessageBox::information(NULL,"Warning","File can not be opened.",QMessageBox::Yes);
        return ;}
    else{
        for(auto item:v){
            out << item ;
        }
        //  QMessageBox::information(NULL,"Warning","open questionfile successfully.",QMessageBox::Yes);
    }
   outfile.close();
}

//存问题信息到文件中
void LoaderAndSaver::SaveQuestionIntoFile(vector<Question> v)
{
    QFile outfile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/question.txt");
    QTextStream out(&outfile);
    if(!outfile.open(QIODevice::WriteOnly | QIODevice::Text)) {//打开失败
        QMessageBox::information(NULL,"Warning","File can not be opened.",QMessageBox::Yes);
        return ;}
    else{
        for(auto item:v){
            out << item ;
        }
        //  QMessageBox::information(NULL,"Warning","open questionfile successfully.",QMessageBox::Yes);
    }
   outfile.close();
}

//存回答信息到文件
void LoaderAndSaver::SaveAnswerIntoFile(vector<Answer> v)
{
    QFile outfile("/Users/QiYin/build-AnA-Desktop_Qt_5_8_0_clang_64bit-Debug/answer.txt");
    QTextStream out(&outfile);
    if(!outfile.open(QIODevice::WriteOnly | QIODevice::Text))
    {//打开失败
        QMessageBox::information(NULL,"Warning","File can not be opened.",QMessageBox::Yes);
        return ;
    }
    else{
        for(auto item:v){
            out << item ;
        }
        //  QMessageBox::information(NULL,"Warning","open questionfile successfully.",QMessageBox::Yes);
    }
   outfile.close();
}
