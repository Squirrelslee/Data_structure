#include "Auto.h"
#include "Decltype.h"
#include "Auto_Decltype.hpp"
#include "Value_define.hpp"
#include "List_Initialization.hpp"
#include "template_improve.hpp"
#include "Concurrency_Multithreading.hpp"
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
    //List_Initialization_Test();
    
    //模板别名
    //using_Test();

    //模板的默认模板参数
    //template_func_Test();

    //变长参数
    //long_func(1, 2, 3, "hello", 4.5);
    //sum_Test();
    // return 0;

    //有两个线程在跑，相当于整个程序的执行有两条线在同时执行，所以可以同时干两个事，即使有一条线被堵住了，另一条线也会执行
    std::thread mytobj(Multithreading_Test);//thread是标准库的类，Multithreading_Test可调用对象。
    //创建了线程、线程执行起点Multithreading_Test;Multithreading_Test开始执行
    
    mytobj.join();//阻塞主线程，让主线程等待子线程执行完毕，然后子线程和主线程汇合，然后继续走
    //阻塞主线程并等待子线程执行完
    std::cout << "Hello world!" << std::endl;
    
    return 0;

}



