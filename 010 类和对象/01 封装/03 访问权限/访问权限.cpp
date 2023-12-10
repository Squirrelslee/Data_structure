#include <iostream>
using namespace std;

class Person
{
private:
    string m_car;
public:
    string m_name;
protected:
    int password;

public:
    void func()
    {
        m_name = "张三";
        m_car = "汽车";
        password = 12421;
    }

};



int main()
{
    Person s1;
    s1.func();
    system("sleep   1s");
    return 0;
}