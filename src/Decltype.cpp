#include "Decltype.h"

/*
auto用于推导变量类型，而decltype则用于推导表达式类型，
这里值用于编译器分析表达式的类型，表达式实际不会进行运算。

decltype推导规则

对于decltype(exp)有

exp是表达式，decltype(exp)和exp类型相同

exp是函数调用，decltype(exp)和函数返回值类型相同
其它情况，若exp是左值，decltype(exp)是exp类型的左值引用

*/

int func(){return 0;}
decltype(func()) i;     //i为int类型

int x = 0;
decltype(x) y; //y是int类型
decltype(x + y) z;//z是int类型

//cv属性:const和volatile
//注意：decltype不会像auto一样忽略引用和cv属性，decltype会保留表达式的应用和cv属性
void Decltype_Test()
{
    int a = 0, b = 0;
    decltype(a + b) c = 0;      //c是int，因为(a + b)返回一个右值
    decltype(a += b) d = c;     //d是int&，因为(a += b)返回一个左值
    d = 20;
    std::cout << "c =  " << c << std::endl;
}
