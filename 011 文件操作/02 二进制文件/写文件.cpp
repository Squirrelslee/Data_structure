#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:

    char m_Name[64];
    int m_age;

};

void test01()
{
    ofstream ofs("Person.txt", ios::out | ios::binary);
    Person p = {"张三",18};
    ofs.write((const char *)&p,sizeof(Person));
    ofs.close();
}

int main()
{
    test01();
    return 0;
}