#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int * const p = &a;
    *p = 100;
    //p = &b;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    cout << "p =" << p << endl;
}