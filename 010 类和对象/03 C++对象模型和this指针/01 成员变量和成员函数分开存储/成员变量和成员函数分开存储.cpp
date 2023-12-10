#include <iostream>
using namespace std;

//成员变量和成员函数是分开存储的
class Person
{
public:
    int m_a;//属于类的对象上
    static int m_b;
    void func(){}//非静态成员函数 不属于类的对象上
    static void func2(){} //静态成员函数 不属于类的对象上
};
int Person::m_b = 10;//静态变量不属于类的对象上
void test01()
{
    Person p;
    cout << "sizeof p = " << sizeof(p) << endl;//空对象占用内存空间为：1
    //C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象也因该有一个独一无二的内存地址
}
void test02()
{
    Person p1;
    cout << "sizeof p1 = " << sizeof(p1) << endl;
}
int main()
{
    test01();
    test02();
    system("sleep 01s");
    return 0;
}