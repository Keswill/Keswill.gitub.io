#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand () % 100 + 1;
     int a = 0;
        cout << "请输入猜测的数" << endl;
    while(1)
    {
        cin >> a;
        if (a > num)
        {
            cout << "猜大了" << endl;
        }
        else if (a < num)
        {
            cout << "猜小了" << endl;
        }
        else
        {
            cout << "恭喜你猜对了" << endl;
            break;
        }
    }
}
