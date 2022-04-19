#include <iostream>
using namespace std;
//自定义数据类型，一些类型的集合组成的一个类型
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    struct student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名：" << s1.name << endl << "年龄：" << s1.age << endl << "分数：" << s1.score << endl;

    struct student s2 = {"李四",18,90};
    cout << "姓名：" << s2.name << endl << "年龄：" << s2.age << endl << "分数：" << s2.score << endl;
}