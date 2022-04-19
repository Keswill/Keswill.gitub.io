#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};

int main()
{
    teacher t;
    t.id = 100000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 100;

    cout << "老师姓名" << t.name << endl << "职工编号" << t.id << endl << "老师年龄" << t.age << endl << "老师辅导的学生姓名"
        << t.stu.name << endl << "老师辅导的学生年龄" << t.stu.age << endl << "老师辅导学生的分数" << t.stu.score << endl;

}