#include <iostream>
#include <string>
using namespace std;

//木板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现
template<class T>
bool myCompare(T &a,T &b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class Person
{
public:

    Person(string name , int age)
    {
        this->m_Name = name;
        this->m_age = age;
    }

    string m_Name;
    int m_age;
};

//利用具体化的Person的版本实现代码。具体化优先调用

template<> bool myCompare(Person &p1,Person &p2)
{
    if(p1.m_Name == p2.m_Name && p1.m_age > p2.m_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a,b);
    if(ret)
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" << endl;
    }
}
void test02()
{
    Person p1("marklee",10);
    Person p2("marklee",10);
    bool ret = myCompare(p1 , p2);
    if(ret)
    {
        cout << "是一个人" << endl;
    }
    else
    {
        cout << "不是一个人" << endl;
    }
}
int main()
{
    test01();
    test02();
    return 0;
}