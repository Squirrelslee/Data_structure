#include <iostream>

using namespace std;

int main()
{
    short num1 = 10;
    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
    cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

    //整型大小比较
    //short<int<long=long long
    system("pause");

    return 0;
}
