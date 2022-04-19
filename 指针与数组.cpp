#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr;
    cout << "利用指针访问第一个元素" << *p << endl;
    p++;
    cout << "利用指针访问第二个元素" << *p << endl;

    for (int i = 0;i < 10;i++)
    {
        cout << *p << endl;
        p++;
    }
}