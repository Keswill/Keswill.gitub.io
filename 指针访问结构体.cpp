#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float score;
};

int main()
{
    student s = {"张三",18,100};
    student * p = &s;
    cout << "姓名:" << p -> name << endl << "年龄:" << p -> age << endl << "分数:" << p -> score << endl;
}