#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int * p;
    p = &a;

    cout << "a = " << a << endl;
    cout << "p = " << p << endl;

    *p = 1000;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
}