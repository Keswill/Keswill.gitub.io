#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4,2,8,0,5,7,1,3,9};
    cout << "排序前：" << endl;
    for (int i = 0;i < 9;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < 8;i++)
    {
        for (int j = 0;j < 9 - i -1;j++)
        {
            if (arr[j] > arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "排序后：" << endl;
    for (int i = 0;i < 9;i++)
    {
        cout << arr[i] << " ";
    }
}