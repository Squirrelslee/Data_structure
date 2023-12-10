#include<iostream>
using namespace std;
template<class T1,class T2>
class Person
{
    friend void print(Person<T1,T2>p)
    {
        cout << p.m_Name << endl;
        cout << p.m_Age << endl;
    }
public:
    Person(T1 name , T2 age)
    {
        m_Name = name;
        m_Age = age;
    }
private:
    T1 m_Name;
    T2 m_Age;
};
void test01()
{
    Person<string,int>p("marklee",23);
    print(p);
}
int main()
{
    test01();
    return 0;
}