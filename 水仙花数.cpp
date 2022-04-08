#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    do
    {
        num++;

        int a = num % 10;
        int b = num / 10 % 10;
        int c = num / 100;

        if (a*a*a + b*b*b + c*c*c == num)
        {
            cout << "水仙花数为" << num << endl;
        }
    }
    while(num < 999);
}