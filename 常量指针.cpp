#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;
    const int * p;
    p = &a;
    p = &b;
    //*p = 1000;

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    cout << "p =" << p << endl;
}