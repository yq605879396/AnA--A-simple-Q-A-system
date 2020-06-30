#ifndef TOTAL_H
#define TOTAL_H
#include <Vector>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include<istream>
#define RowNum 6
#define ColNum 5
#define questionPage questionNum/RowNum+1

using namespace std;
class Operation;//包含各种操作
class User;//用户数据结构
class Question;//问题数据结构
class Answer;//回答数据结构
class Searcher;//各种搜索操作
class LoaderAndSaver;//文件的读取与写入

extern LoaderAndSaver load;
extern vector<User> userVector;//所有的用户
extern vector<Answer> answerVector;//所有的回答
extern vector<Question> questionVector;//所有的问题
extern Operation* operation;//要用到operation操作时的实例
extern Searcher* searcher;//要用到searcher操作时的实例
extern int questionNum;//问题总数
extern int answerNum;//答案总数
extern int userNum;//用户总数
extern vector<User>::iterator curUser;//当前登入操作的用户对象的迭代器
extern int curQuestion;//当前查看操作的问题（应用于questiondetailsdialog页面）
extern QString curCheckID;//当前正在查看的人的ID
#endif // TOTAL_H
