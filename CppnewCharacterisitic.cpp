#include "Auto.h"
#include "Decltype.h"
#include "Auto_Decltype.hpp"
#include "Value_define.hpp"
#include "List_Initialization.hpp"



int main()
{
    //值推导
    // auto x = Auto_Test();//auto接收函数返回蛮有用
    // std::cout << "hello" << x << std::endl;

    //表达式推导
    // Decltype_Test();
    // std::cout << Auto_Decltype::add(1,2) << std::endl;//搞点作用域，以后学多了避免某些重复
    
    //将亡值
    //Dead_value();

    //深拷贝
    // A a(10);
    // A b = a;
    // std::cout << "b " << b.data_ << std::endl;
    // std::cout << "a " << a.data_ << std::endl;
    // return 0;

    //语义转发
    // B a(10);
    // B b = a;
    // B c = std::move(a);

    //完美转发
    // Perfect_Send(1); // lvalue rvalue rvalue
    // int a = 1;
    // Perfect_Send(a); // lvalue lvalue rvalue
    // Perfect_Send(std::forward<int>(a)); // lvalue rvalue rvalue
    // Perfect_Send(std::forward<int&>(a)); // lvalue lvalue rvalue
    // Perfect_Send(std::forward<int&&>(a)); // lvalue rvalue rvalue

    //列表初始化
    List_Initialization_Test();
    


    Vec<int> v;//vec<int>同vector<int, Alloc<int>>
    return 0;
}
