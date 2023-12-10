#include <iostream>
using namespace std;
#include <unistd.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    cout << arr[4] << endl;
    int arr1[] = {10,20,30,40,50};
    for(int i = 0;i < 5;i++)
    cout << arr1[i] << " ";
    cout << endl;
    cout << sizeof(arr1[1]) << endl;
    cout << "数组的首地址" << arr1 << endl;
    cout << &arr1[1] << endl;
    pause();
    return 0;
}