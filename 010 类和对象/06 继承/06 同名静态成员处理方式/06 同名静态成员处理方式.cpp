#include <iostream>

using namespace std;
class Base
{
public:
    static int m_a;
    static void func()
    {
        cout << "Base下的func" << endl;
    }
    static void func(int a)
    {
        cout << "Base下的funcint" << endl;
    }
};
int Base::m_a = 100;
class son:public Base
{
public:
    static int m_a;
    static void func()
    {
        cout << "son下的func" << endl;
    }
};
int son::m_a = 1000;
void test01()
{
    son s;
    //1、通过对象访问
    cout << "通过对象访问" << endl;
    cout << "son下 m_a = " << s.m_a << endl;
    cout << "Base下 m_a = " << s.Base::m_a << endl;
    //2、通过类名访问
    cout << "通过类名访问" << endl;
    cout << "son下 m_a = " << son::m_a << endl;
    //第一个：：代表类名方式访问    第二个：：代表访问父类作用域下
    cout << "Base下 m_a = " << son::Base::m_a << endl;
}

void test02()
{
    son s;
    s.func();
    s.Base::func();
    son::func();
    son::Base::func();
    son::Base::func(100);
}
int main()
{
    test01();
    test02();
    return 0;
}