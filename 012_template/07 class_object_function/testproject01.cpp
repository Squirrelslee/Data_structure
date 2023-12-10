#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class Person
{
public:
    Person(T1 name,T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    T1 m_Name;
    T2 m_Age;
    void showPerson()
    {
        cout << this->m_Name << endl;
        cout << this->m_Age << endl;
    }
};
//指定传入的类型
void printPerson1(Person<string,int>&p)
{
    p.showPerson();
}
void test01()
{
    Person<string,int>p1("makrlee",23);
    printPerson1(p1);
}

//参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p)
{
    p.showPerson();
    cout << "T1类型" << typeid(T1).name() << endl;
    cout << "T2类型" << typeid(T2).name() << endl;
}

void test02()
{
    Person<string,int>p2("squirrels",23);
    printPerson2(p2);
}
//整个类模板化
template<class T>
void printPerson2(T &p)
{
    p.showPerson();
}
void test03()
{
    Person<string,int>p("mark",23);
    printPerson2(p);
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}