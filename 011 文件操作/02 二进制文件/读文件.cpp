#include <iostream>
#include <fstream>

using namespace std;
class Person
{
public:
    char m_Name[64];
    int m_Age;

};
void test01()
{
    ifstream ifs("Person.txt",ios::in|ios::binary);
    if(!ifs.is_open())
    {
        cout << "打开失败" << endl;
        return;
    }
    Person p;
    ifs.read((char *)&p ,sizeof(Person));
    cout << "姓名：" << p.m_Name << "   年龄：" << p.m_Age << endl;

    ifs.close();
    


}

int main()
{
    test01();
    return 0;
}