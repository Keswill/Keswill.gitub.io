#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void printstudents(const student *s)
{
    cout << "姓名:" << s->name << endl << "年龄:" << s->age << endl << "分数:" << s->score << endl;
}

int main()
{
    student s = {"张三",18,70};
    printstudents(&s);
}