#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    //指针定义的语法：数据类型 *指针变量名
    int * p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为： " << &a << endl;
    cout << "指针p为：" << p << endl;
    //可以通过解引用的方式来找到指针

    cout << "指针p指向：" << *p << endl;

    *p = 1000;//指针指向位置的值改变及为a = 1000；
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;


    system("pause");
    return 0;
}