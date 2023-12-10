#include <iostream>

using namespace std;
//静态成员函数只能访问静态成员变量

class Person
{
public:

static void func()
{
    m_A = 100;
    //m_B = 100;不能访问非静态成员变量
    cout << "static void func 调用" << endl;
}
static int m_A;
int m_B;
};
int Person::m_A = 0;
void test01()
{
    //1、通过对象访问
    Person p;
    p.func();
    //2、通过类名访问
    Person::func;
    cout << Person::m_A << endl;
}
int main()
{
    test01();
    system("sleep 1s");
    return 0;
}