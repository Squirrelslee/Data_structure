#pragma once
#include <iostream>
#define day 10
/*
template<typename T, typename U>
return_value add(T t, U u) { // t和v类型不确定，无法推导出return_value类型
    return t + u;
}
上面代码由于t和u类型不确定，那如何推导出返回值类型呢，我们可能会想到这种
template<typename T, typename U>
decltype(t + u) add(T t, U u) { // t和u尚未定义
    return t + u;
}


返回值后置类型语法就是为了解决函数返回值类型依赖于参数但是却难以确定返回值类型的问题。
*/
namespace Auto_Decltype
{
    template<typename T, typename U>
    auto add(T t, U u) -> decltype(t + u) {
        return t + u;
    }
    template<class T, class U>
    auto mult(T t, U u) ->decltype(t * u){
        return t * u;
    }
}
