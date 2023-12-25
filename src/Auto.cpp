#include "Auto.h"

/*
总结一下auto的限制：

auto的使用必须马上初始化，否则无法推导出类型

auto在一行定义多个变量时，各个变量的推导不能产生二义性，否则编译失败
auto不能用作函数参数

在类中auto不能用作非静态成员变量
auto不能定义数组，可以定义指针

*/


int Auto_Test()
{
    int i = 10;
    auto a = i, &b = i, *c = &i;    //a是int，b是i的引用，c是i的指针，auto相当于int
    i = 20;
    int d[10] = {0};
    auto f = d;
    std::cout << *f << std::endl;
    std::cout << a << b << *c << std::endl;
    return 1;
    /*
    注意:
    void func(auto value){}         //auto不能用作函数参数
    
    class A{
        auto a = 1;                 //error 在类中auto不能用作非静态成员变量
        static auto b = 1;          //error, 这里与auto无关，正常static int b = 1也不可以
        static const auto c = 1;    //ok
    }

    void func2()
    {
        int a[10] = {0};
        auto b = a;                 //ok
        auto c[10] = a;             //error, auto不能定义数组，可以定义指针
        std::vector<int> d;
        std::vector<auto> f = d;    //error, auto无法推导出模板参数
    }
    */

}