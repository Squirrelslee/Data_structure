#include <iostream>
using namespace std;
#include <string>
class phone
{
public:
    string m_Pname;
    phone(string pname)
    {
        m_Pname = pname;
        cout << "phone" << endl;
    }
    ~phone()
    {
        cout << "phone析构" << endl;
    }
    
};


class Person
{
public:
    string m_name;
    phone m_phone;
    Person(string name,string pname):m_name(name),m_phone(pname)
    {
        cout << "person" << endl;
    }
    ~Person()
    {
        cout << "Person析构" << endl;
    }
    
};
void test01()
{
    Person p1("小李","iphone");
    cout << "姓名：" << p1.m_name << endl;
    cout << "手机：" << p1.m_phone.m_Pname << endl;
}

int main()
{
    test01();
    system("sleep 1s");
    return 0;
}