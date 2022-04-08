#include <iostream>
using namespace std;

int main()
{
    int pig1 = 0;
    int pig2 = 0;
    int pig3 = 0;

    cout << "请输入小猪1的体重" << endl;
    cin >> pig1;
    cout << "请输入小猪2的体重" << endl;
    cin >> pig2;
    cout << "请输入小猪3的体重" << endl;
    cin >> pig3;

    cout << "您输入的小猪1的体重为：" << pig1 << endl;
    cout << "您输入的小猪2的体重为：" << pig2 << endl;
    cout << "您输入的小猪3的体重为：" << pig3 << endl;

    if (pig1 > pig2)
    {
        if (pig1 > pig3)
        {
            cout << "小猪1最重" << endl;
        }
        else 
        {
            cout << "小猪3最重" << endl;
        }
    }
    else
    {
        if (pig2 > pig3)
        {
            cout << "小猪2最重" << endl;
        }
        else
        {
            cout << "小猪3最重" << endl;
        }
    }

    system("pause");
    
    return 0;
}