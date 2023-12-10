#include <iostream>
using namespace std;

class Person
{
public:

//传统的初始化操作
    // Person(int a,int b,int c)
    // {
    //     m_a = a;
    //     m_b = b;
    //     m_c = c;
    // }
    int m_a;
    int m_b;
    int m_c;
    Person(int a,int b,int c):m_a(a),m_b(b),m_c(c)
    {

    }

};
void test01()
{
    Person p(10,20,300);
    cout << p.m_a << "\t" << p.m_b << "\t" <<  p.m_c << endl;
}

int main()
{
    test01();
    system("sleep 1s");
    return 0;
}