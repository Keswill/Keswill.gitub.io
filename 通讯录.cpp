#include <iostream>
#include<stdlib.h>
#include <unistd.h>
using namespace std;
#define MAX 1000

struct person
{
    string m_name;
    int m_sex;
    int m_age;
    string m_phone;
    string m_addr;
};

struct addressbooks
{
    struct person personarray[MAX];
    int m_size;
};

void showmenu()
{
    cout << "1、添加联系人" << endl;
    cout << "2、显示联系人" << endl;
    cout << "3、删除联系人" << endl;
    cout << "4、查找联系人" << endl;
    cout << "5、修改联系人" << endl;
    cout << "6、清空联系人" << endl;
    cout << "0、退出通讯录" << endl;
}

void addperson(addressbooks * abs)
{
    string A;
    if (abs->m_size == MAX)
    {
        cout << "通讯录已满" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名:" << endl;
        cin >> name;
        abs->personarray[abs->m_size].m_name = name;

        cout << "请输入性别:" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarray[abs->m_size].m_sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        cout << "请输入年龄:" << endl;
        int age = 0;
        while(true)
        {
            cin >> age;
            if (age >= 0 && age < 150)
            {
                abs->personarray[abs->m_size].m_age = age;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        cout << "请输入联系电话:" << endl;
        string phone;
        cin >> phone;
        abs->personarray[abs->m_size].m_phone = phone;

        cout << "请输入家庭住址:" << endl;
        string address;
        cin >> address;
        abs->personarray[abs->m_size].m_addr = address;

        abs->m_size++;
        cout << "添加成功" << endl;
    }
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}


void showperson (addressbooks * abs)
{
    string A;
    if (abs->m_size == 0)
    {
        cout << "当前的记录为空" << endl;
    }
    else
    {
        for (int i = 0;i < abs->m_size;i++)
        {
            cout << "姓名:" << abs->personarray[i].m_name << endl;
            cout << "性别:" << (abs->personarray[i].m_sex == 1 ? "男":"女") << endl;
            cout << "年龄:" << abs->personarray[i].m_age << endl;
            cout << "电话:" << abs->personarray[i].m_phone << endl;
            cout << "住址:" << abs->personarray[i].m_addr << endl;
        }
    }
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}

int exist(addressbooks * abs, string name)
{
    for (int i = 0;i < abs->m_size;i++)
    {
        if (abs->personarray[i].m_name == name)
        {
            return i;
        }
    }
    return -1;
}

void deleteperson (addressbooks * abs)
{
    string A;
    cout << "请输入您要删除的联系人" << endl;

    string name;
    cin >> name;

    int ret = exist(abs,name);

    if (ret != -1)
    {
        for (int i = ret;i < abs->m_size;i++)
        {
            abs->personarray[i] = abs->personarray[i + 1]; 
        }
        abs->m_size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}

void findperson(addressbooks * abs)
{
    string A;
    cout << "请输入要查找的联系人" << endl;
    string name;
    cin >> name;

    int ret = exist(abs,name);

    if (ret != -1)
    {
        cout << "姓名:" << abs->personarray[ret].m_name << endl;
        cout << "性别:" << (abs->personarray[ret].m_sex == 1 ? "男":"女") << endl;
        cout << "年龄:" << abs->personarray[ret].m_age << endl;
        cout << "电话:" << abs->personarray[ret].m_phone << endl;
        cout << "住址:" << abs->personarray[ret].m_addr << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}

void modifyperson(addressbooks * abs)
{
    string A;
    cout << "请输入要修改的联系人" << endl;
    string name;
    cin >> name;

    int ret = exist(abs,name);

    if (ret != -1)
    {
        string name;
        cout << "请输入姓名:" << endl;
        cin >> name;
        abs->personarray[ret].m_name = name;

        cout << "请输入性别:" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex = 0;

        while (true)
        {
            cin >> sex;
            if (sex ==1 || sex == 2)
            {
                abs->personarray[ret].m_sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        
        cout << "请输入年龄" << endl;
        int age = 0;
        while (true)
        {
            cin >> age;
            if (age >= 0 && age < 150)
            {
                abs->personarray[ret].m_age = age;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        cout << "请输入联系电话:" << endl;
        string phone;
        cin >> phone;
        abs->personarray[ret].m_phone = phone;

        cout << "请输入家庭住址:" << endl;
        string address;
        cin >> address;
        abs->personarray[ret].m_addr = address;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}

void cleanperson(addressbooks * abs)
{
    string A;
    abs->m_size = 0;
    cout << "通讯录已清空" << endl;
    cout << "按任意键继续" << endl;
    cin >> A;
    system("clear");
}

int main()
{
    addressbooks abs;
    int select = 0;
    while(true)
    {
        showmenu();
        cin >> select;
    
        switch(select)
        {
            case 1:
                addperson(&abs);
                break;
            case 2:
                showperson(&abs);
                break;
            case 3:
                deleteperson(&abs);
                break;
            case 4:
                findperson(&abs);
                break;
            case 5:
                modifyperson(&abs);
                break;
            case 6:
                cleanperson(&abs);
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                system ("pause");
                return 0;
                break;
            default:
                break;
    }
        }
}