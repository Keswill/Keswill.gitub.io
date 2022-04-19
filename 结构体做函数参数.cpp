#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float score;
};

void printstudent (student s)
{
    cout << "子函数姓名:" << s.name << endl << "年龄" << s.age << endl << "分数" << s.score << endl;
}

void printstudent1 (struct student * p)
{
    cout << "子函数2姓名:" << p -> name << endl << "年龄" << p -> age << endl << "分数" << p -> score << endl;
}

int main()
{
    student s;
    s.name = "张三";
    s.age = 18;
    s.score = 100;
    cout << "main函数姓名:" << s.name << endl << "年龄" << s.age << endl << "分数" << s.score << endl;
    printstudent(s);
    printstudent1(&s);
}