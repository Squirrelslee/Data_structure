#include<iostream>
using namespace std;
//常量的定义方式
//1、#define 宏常量 常定义在开头
//2、const 修饰的变量
#define Day 7

int main()
{
    int _abb = 7;
    int _Abb = 9;
    //Day = 14;//错误，Day是常量，一旦修改就会报错
    const int month =12;
    //month =24;//const修饰的变量也称为常量
    cout << "一周总共有：" << Day << "天" << endl;
    cout << "一年总共有：" << month << "月" << endl;
    int a = 10;
    cout << "a=" << a << endl;

    cout<< "hello C++" <<endl;

    system("pause");

    return 0;    
}