#include <iostream>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void bubblesort(struct hero heroarray[],int len)
{
    for (int i = 0;i < len - 1;i++)
    {
        for (int j = 0;j < len - i - 1;j++)
        {
            if (heroarray[j].age > heroarray[j+1].age)
            {
                struct hero temp = heroarray[j];
                heroarray[j] = heroarray[j+1];
                heroarray[j+1] = temp;
            }
        }
    }
}

void printhero(struct hero heroarray[],int len)
{
    for (int i = 0;i < len;i++)
    {
        cout << "姓名:" << heroarray[i].name << "年龄:" << heroarray[i].age << "性别:" << heroarray[i].sex << endl;
    }
}
int main()
{
    struct hero heroarray[5] = 
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof(heroarray) / sizeof(heroarray[0]);
    bubblesort(heroarray,len);
    printhero(heroarray,len);
}
