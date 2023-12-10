#include <iostream>

using namespace std;

//加号运算符重载

class Person
{
public:

    Person operator+(Person &p)
    {
        Person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;
    }
    int m_a;
    int m_b;
};


// Person operator+(Person &p1,Person &p2)
// {
//     Person temp;
//     temp.m_a = p1.m_a + p2.m_a;
//     temp.m_b = p1.m_b + p2.m_b;
//     return temp;
// }
Person operator+(Person &p1,int a)
{
    Person temp;
    temp.m_a = p1.m_a + a;
    temp.m_b = p1.m_b + a;
    return temp;
}

void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 10;
    p2.m_b = 20;
    Person p3;
    p3 = p1 + 10;
    cout << p3.m_a << endl;
    cout << p3.m_b << endl;
}
int main()
{
    test01();
    

    system("sleep 1s");

    return 0;
}