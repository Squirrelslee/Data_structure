#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 3;j++)
        cout << arr1[i][j] << " ";
        cout << endl;
    }
    cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存空间为：" << sizeof(arr[0]) << endl; 
    cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr[0][0]) << endl;

    cout << "二维数组行数为" << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "二维数组列数为" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;
    cout << "二维数组首地址" << arr << endl;
    cout << "二维数组第一行首地址" << arr[0] << endl;
    cout << "二维数组第二行首地址" << arr[1] << endl;
    cout << "二维数组第一个元素首地址" << &arr[0][0] << endl;
    system("pause");
    return 0;
}