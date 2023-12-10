#include <iostream>

using namespace std;

int main()
{
    //指针和数组
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr;//arr就是首地址
    int * p1 = arr1;
    cout << &p << endl;
    cout << &p1 << endl;
    cout << arr << endl;
    cout << arr1 <<endl;

    for(int i = 0; i < 10 ;i++)
    {
        cout << *p << endl;
        p++;
    }

    system("pause");
    return 0;
}