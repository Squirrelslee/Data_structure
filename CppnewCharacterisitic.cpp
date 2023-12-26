#include "Auto.h"
#include "Decltype.h"
#include "Auto_Decltype.hpp"
#include "Value_define.hpp"


int main()
{
    // auto x = Auto_Test();//auto接收函数返回蛮有用
    // std::cout << "hello" << x << std::endl;

    // Decltype_Test();
    // std::cout << Auto_Decltype::add(1,2) << std::endl;//搞点作用域，以后学多了避免某些重复

    //Dead_value();
    
    // A a(10);
    // A b = a;
    // std::cout << "b " << b.data_ << std::endl;
    // std::cout << "a " << a.data_ << std::endl;
    // return 0;

    B a(10);
    B b = a;
    B c = std::move(a);
    return 0;
}