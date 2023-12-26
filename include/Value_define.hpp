#pragma once
#include <iostream>
#include <utility>
#include <vector>

//左值、右值
void left_value()
{
    int b = 1, c = 1;//1作为普通字面量为右值，b、c为左值
    //int a = &(b + c);错误也不能放在等号左边
}
//左值：可以取地址并且有名字的东西就是左值；
//右值：不能取地址的没有名字的东西就是右值。
/*
左值一般有：
函数名和变量名
返回左值引用的函数调用
前置自增自减表达式++i、--i
由赋值表达式或赋值运算符连接的表达式(a=b, a += b等)
解引用表达式*p
*/

//纯右值、将亡值都属于右值
/*
//纯右值：元算表达式产生的临时变量、不和对象关联的原始字面量、非引用返回的临时变量lambda表达式等都是纯右值
除字符串字面值外的字面值
返回非引用类型的函数调用
后置自增自减表达式i++、i--
算术表达式(a+b, a*b, a&&b, a==b等)
取地址表达式等(&a)
*/

//将亡值
/*
将亡值是指C++11新增的和右值引用相关的表达式，通常指将要被移动的对象、T&&函数的返回值、
std::move函数的返回值、转换为T&&类型转换函数的返回值，将亡值可以理解为即将要销毁的值，
通过“盗取”其它变量内存空间方式获取的值，在确保其它变量不再被使用或者即将被销毁时，
可以避免内存空间的释放和分配，延长变量值的生命周期，常用来完成移动构造或者移动赋值的特殊任务。
*/
void Dead_value()
{
    std::string str = "hello";
    std::vector<std::string> v;
    //调用常规的拷贝构造函数，新建字符数组，拷贝数据
    v.push_back(str);
    std::cout << "After copy, str is \"" << str << "\n";
    //调用移动构造函数，掏空str，掏空后，最好不要使用str
    v.push_back(std::move(str));
    std::cout << "After move, str is \"" << str << "\n";
    std::cout << "The contents of the vector are\"" << v[0]
                << "\",\"" << v[1] << "\"\n";
}

//左值引用
/*
可以得出结论：对于左值引用，等号右边的值必须可以取地址，如果不能取地址，则会编译失败，
或者可以使用const引用形式，但这样就只能通过引用来读取输出，不能修改数组，因为是常量引用。
*/
void left_reference()
{
    int a = 5;
    int &b = a;
    b = 4;
    //int &c = 10;  //error,    10无法取地址，无法进行引用
    const int &d = 10;//ok,     因为是常引用。引用常量数字，这个常量数字会存储在内存中，可以取地址
}

//右值引用
void right_reference()
{
    int a = 4;
    //int &&b = a;  //error, a是左值
    int &&c = std::move(a);
}

//深拷贝，浅拷贝
class A{
public:
    A(int size) :size_(size){
        data_ = new int[size_];
    }
    A(){}
    A(const A& a){
        size_ = a.size_;
        //data_ = a.data_;//这个数据指向了同一地址
        /*
        上面代码中，两个输出的是相同的地址，a和b的data_指针指向了同一块内存，这就是浅拷贝，
        只是数据的简单赋值，那再析构时data_内存会被释放两次，
        导致程序出问题，这里正常会出现double free导致程序崩溃的
        */
        data_ = new int[size_];
        /*
        深拷贝就是再拷贝对象时，如果被拷贝对象内部还有指针引用指向其它资源，
        自己需要重新开辟一块新内存存储资源，而不是简单的赋值。
        */
        std::cout << "copy" << std::endl;
    }
    ~A(){
        delete[] data_;
    }
    int *data_;
    int size_;
};

//移动语义
class B{
public:
    B(int size) : size_(size){
        data_ = new int[size];
    }
    B(){}
    B(const B& a){
        size_ = a.size_;
        data_ = new int[size_];
        std::cout << "copy" << std::endl;
    }
    B(B&& a){
        this->data_ = a.data_;
        a.data_ = nullptr;
        std::cout << "move " << std::endl;
        /*
        注意：移动语义仅针对于那些实现了移动构造函数的类的对象，
        对于那种基本类型int、float等没有任何优化作用，
        还是会拷贝，因为它们实现没有对应的移动构造函数。
        */
    }
    ~B(){
        if(data_ != nullptr){
            delete[] data_;
        }
    }
    int *data_;
    int size_;

};

//完美转发
/*
完美转发指可以写一个接受任意实参的函数模板，并转发到其它函数，
目标函数会收到与转发函数完全相同的实参，
转发函数实参是左值那目标函数实参也是左值，
转发函数实参是右值那目标函数实参也是右值。
那如何实现完美转发呢，答案是使用std::forward()。
*/
//返回优化