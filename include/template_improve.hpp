/*
模板的右尖括号
C++11之前是不允许两个右尖括号出现的，会被认为是右移操作符，所以需要中间加个空格进行分割，避免发生编译错误。

模板的别名
C++引入了using，可以轻松的定义别名，而不是使用繁琐的typedef

函数模板的默认模板参数
*/
#include <bits/stdc++.h>
#include <vector>

void template_improve()
{
    //右尖括号
    std::vector<std::vector<int>> a;//C++11前error
    std::vector<std::vector<int> > b;//ok

    typedef std::vector<std::vector<int>> vvi;//before c++11
    using vvi = std::vector<std::vector<int>>;//C++11


}

template<class T>
class Alloc{};
template<class T>
using Vec = std::vector<Alloc<T>>;//类型标识为vector<Alloc<T>>
void using_Test()
{
    Vec<int> v;//vec<int>同vector<int, Alloc<int>>
}
//C++11之前只有类模板支持默认模板参数，函数模板是不支持默认模板参数的，C++11之后都支持
template <class T, class U = int>
class D{
    T value;
};
// template <class T = int, class U>    //error,类模板的默认模板参数必须从右往左定义，而函数模板则没有这个限制
// class E{
//     T value;
// };

template <class R, class U = int>
R template_func1(U val)
{
    return val;
}
template <class R = int, class U>
R template_func2(U val)
{
    return val;
}
void template_func_Test()
{
    std::cout << template_func1<int, double>(99.9) << std::endl; // 99
    std::cout << template_func1<double, double>(99.9) << std::endl; // 99.9
    std::cout << template_func1<double>(99.9) << std::endl; // 99.9
    std::cout << template_func1<int>(99.9) << std::endl; // 99
    std::cout << template_func2<int, double>(99.9) << std::endl; // 99
    std::cout << template_func1<double, double>(99.9) << std::endl; // 99.9
    std::cout << template_func2<double>(99.9) << std::endl; // 99.9
    std::cout << template_func2<int>(99.9) << std::endl; // 99
}

//同时C++11支持变长参数模板
template <class T>
void long_func(const T& t){
    std::cout << t;
}

template <class T, class ... Args>
void long_func(const T& t, Args ... args){
    std::cout << t << ',';
    long_func(args...);
}
int sum(int x)
{
    if(x == 0)
    return 0;
    else
    return x + sum(x - 1);
}





// 基本情况：当没有参数时，返回 0
template <typename T>
T sum_(const T& t) {
    return t;
}

// 递归情况：将第一个参数与剩余参数相加
template <typename T, typename... Args>
T sum_(T first, Args... rest) {
    return first + sum_(rest...);//这里可以理解为一种函数模板重载，第一次调用sum_有五个参数等待入栈，等只剩一个参数时
    //调用sum_(const T& t);再依次出栈。
}

void sum_Test() {
    // 测试可变参数模板
    int result = sum_(1, 2, 3, 4, 5);
    std::cout << "Sum_: " << result << std::endl;
}

