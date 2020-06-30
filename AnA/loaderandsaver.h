#ifndef LOADERANDSAVER_H
#define LOADERANDSAVER_H
#include <QFile>
#include <QApplication>
#include <QString.h>
#include <QMessageBox>
#include <QTextstream.h>
#include <stdio.h>
#include <total.h>
#include "user.h"
#include "question.h"
#include "answer.h"

class LoaderAndSaver
{
    friend class Operation;
    friend class User;
public:
    void LoadUserByFile();//从文件中读取用户信息
    void LoadQuestionByFile();//从文件中读取问题信息
    void LoadAnswerByFile();//从文件中读取问题信息
    void LoadBasicByFile();//从文件中读取基本信息
    void SaveQuestionIntoFile(vector<Question> v);
    void SaveUserIntoFile(vector<User> v);
    void SaveAnswerIntoFile(vector<Answer>v);
private:

};

#endif // LOADERANDSAVER_H
