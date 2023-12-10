#include <iostream>

using namespace std;

//赋值运算符重载

class Person
{

public:
    Person(int age)
    {
        m_age = new int(age);
    }
    int *m_age;
    Person& operator=(Person &p)
    {
        //先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝

        if(m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        m_age = new int (*p.m_age);
        return *this;
    }
    ~Person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
};

void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;
    cout << *p1.m_age << endl;
    cout << *p2.m_age << endl;
    cout << *p3.m_age << endl;
}

int main()
{
    test01();

    return 0;
}