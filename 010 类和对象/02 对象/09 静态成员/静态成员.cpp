#include <iostream>
using namespace std;
#include <string>
class Person
{
public:
    //所有对象都共享同一份数据
    static int m_A;
    //静态成员变量也是有访问权限的
private:
    static int m_B;
};

int Person::m_B = 200;
int Person::m_A = 100;


void test01()
{
    Person p;
    cout << p.m_A << endl;
    Person p1;
    p1.m_A = 200;
    cout << p.m_A << endl;
}
void test02()
{
    //静态成员变量 不属于某一个对象上，所有对象都共享一份数据
    //因此静态变量有两种访问方式

    //1、通过对象进行访问
    Person p2;
    p2.m_A = 300;
    cout << p2.m_A << endl;
    //2、通过类名进行访问
    cout << Person::m_A << endl;
    //cout << Person::m_B << endl;private下外部访问不了
}
int main()
{
    test02();
    system("sleep 1s");
    return 0;
}