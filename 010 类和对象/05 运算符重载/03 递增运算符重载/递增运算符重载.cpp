#include <iostream>

using namespace std;

class MyInteger
{
    friend ostream& operator<< (ostream& ,MyInteger p);
public:

    MyInteger()
    {
        m_a = 0;
    }
    //前置
    MyInteger& operator++()
    {
        m_a++;
        return *this;
    }
    //后置++运算符
    MyInteger operator++(int)//占为参数
    {
        MyInteger temp = *this;
        m_a++;
        return temp;
    }
private:
    int m_a;
};

ostream& operator<< (ostream& ,MyInteger p)
{
    cout << p.m_a;
    return cout;
}

void test01()
{
    MyInteger p;
    cout << ++p << endl;
}
void test02()
{
    MyInteger p;
    cout << p++ << endl;
    cout << p << endl;
}

int main()
{

    test02();

    return 0;
}