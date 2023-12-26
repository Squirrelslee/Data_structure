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
using Vec = std::vector<Alloc<T>>;//类型标识为vector<T, Alloc<T>>
