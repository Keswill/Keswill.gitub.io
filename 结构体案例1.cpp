#include <iostream>
using namespace std;

struct student
{
    string sname;
    int score;
};

struct teacher
{
    string tname;
    struct student sarray[5];
};

void allocatespace(struct teacher tarray[],int len)
//创建随机取考试成绩的函数，以及分配不同学生给不同老师
{
    string nameseed = "ABCDE";
    for (int i = 0;i < len;i++)
    {
        tarray[i].tname = "Teacher_";
        tarray[i].tname += nameseed[i];
        for (int j = 0;j < 5;j++)
        {
            tarray[i].sarray[j].sname = "Student_";
            tarray[i].sarray[j].sname += nameseed[j];
            
            int random = rand() % 61 + 40;//随机数种子
            tarray[i].sarray[j].score = random;
        }
    }

}

void printinfo(struct teacher tarray[],int len)
//打印函数，打印输出所有结果
{
    for (int i = 0;i < len;i++)
    {
        cout << "老师姓名:" << tarray[i].tname << endl;
        for (int j = 0;j < 5;j++)
        {
            cout << "学生姓名:" << tarray[i].sarray[j].sname << endl << "考试分数:" << tarray[i].sarray[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    struct teacher tarray[3];
    //创建数组，在main函数创建好之后，之前的函数还可以调用
    int len = sizeof(tarray) / sizeof(tarray[0]);
    allocatespace(tarray,len);
    printinfo(tarray,len);
}
