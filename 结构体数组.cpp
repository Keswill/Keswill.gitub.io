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
    struct student arr[3] = 
    {
        {"张三",18,90},
        {"李四",18,95},
        {"王五",18,100}
    };
    for (int i = 0;i < 3;i++)
    {
        cout << "姓名：" << arr[i].name << endl << "年龄：" << arr[i].age << endl << "分数：" << arr[i].score << endl;
    }
}