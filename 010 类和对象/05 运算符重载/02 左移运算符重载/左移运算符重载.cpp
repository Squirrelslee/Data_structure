#include <iostream>

using namespace std;

class Person
{
    friend ostream & operator<<(ostream & cout ,Person p);
private:

    int m_a = 10;
    int m_b = 10;


};

ostream & operator<<(ostream & cout ,Person p)
{
    cout << "m_a = " << p.m_a << "     m_b = " << p.m_b;
    return cout;
}

void test01()
{
    Person p;
    cout << p << "      Hello world " << endl;
}
int main()
{



    test01();




    return 0;
}