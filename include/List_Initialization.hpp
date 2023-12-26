/*
C++11新增列表初始化的概念。
在C++11中可以直接在变量名后面加上初始化列表来进行对象的初始化

首先说下聚合类型可以进行直接列表初始化，这里需要了解什么是聚合类型：

类型是一个普通数组，如int[5]，char[]，double[]等

类型是一个类，且满足以下条件：

没有用户声明的构造函数
没有用户提供的构造函数(允许显示预置或弃置的构造函数)
没有私有或保护的非静态数据成员
没有基类
没有虚函数
没有{}和=直接初始化的非静态数据成员
没有默认成员初始化器
*/

#pragma once
#include <iostream>

class C{
public:
    C(){}
    C(int){}
private:
    C(const C&){}
};
void List_Initialization_Test()
{
    // C a(123);
    // //C b = 123;  //error
    // C c = { 123 };
    // C d{123};      //C++11
    // int e = {123};
    // int f{123};     //C++11
    // std::cout << sizeof(a) << std::endl;
    // int a = 1.2; // ok
    // int b = {1.2}; // error
    // float c = 1e70; // ok
    // float d = {1e70}; // error
    // float e = (unsigned long long)-1; // ok
    // float f = {(unsigned long long)-1}; // error
    // float g = (unsigned long long)1; // ok
    // float h = {(unsigned long long)1}; // ok
    // const int i = 1000;
    // const int j = 2;
    // char k = i; // ok
    // char l = {i}; // error
    // char m = j; // ok
    // char m = {j}; // ok，因为是const类型，这里如果去掉const属性，也会报错
}