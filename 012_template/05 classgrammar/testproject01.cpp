#include <iostream>
using namespace std;
#include <string>
template<class NameType , class AgeType = int>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    void showPerson()
    {
        cout << m_Name << endl;
        cout << m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};
void test01()
{
    Person<string , int>p1("marklee",23);
    p1.showPerson();

}

int main()
{

    test01();
    return 0;
}