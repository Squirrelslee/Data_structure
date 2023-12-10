#include <iostream>

using namespace std;

class Person
{
public:
    int m_age;
    // Person()
    // {
    //     cout << "Person默认构造函数调用" << endl;
    // }
    // Person(int age)
    // {
    //     m_age = age;
    //     cout << "Person有参构造函数调用" << endl;
    // }
    Person(const Person & p)
    {
        m_age = p.m_age;
        cout << "Person拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
};

void test01()
{
    
    cout << "p2的年龄："  <<endl;
}
void test02()
{

}
int main()
{
    test01();
    // test02();
    system("sleep 1s");
    return 0;
}