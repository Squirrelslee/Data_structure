#include <iostream>

using namespace std;

class Base1
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
class son1:public Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共权限成员，到子类依然是公共权限
        m_b = 10;//父类中的保护权限成员，到子类依然是保护权限
        //m_c = 10;父类中的私有权限成员，子类访问不到
    }
};
class son2:protected Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共成员，到子类中变为保护权限
        m_b = 10;//父类中的保护成员，到子类中变为保护权限
        //m_c = 10;访问不到
    }
};
class son3:private Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共成员，到子类中变为私有权限
        m_b = 10;//父类中的保护成员，到子类中变为私有权限
        //m_c = 10;访问不到
    }
};
class Grandson3:public son3
{
public:
    void func()
    {
        // m_a = 10;到了son3中m_a变为私有。及时是儿子，也是访问不到的
        // m_b = 10;到了son3中m_b变为私有。及时是儿子，也是访问不到的
    }
};
void test01()
{
    son1 s1;
    s1.m_a = 100;
}
void test02()
{
    son2 s2;
}
void test03()
{
    son3 s3;
}
int main()
{
    return 0;
}