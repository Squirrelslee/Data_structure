#include <iostream>

using namespace std;
//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1" << endl;
    }
};
class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2" << endl;
    }
};
template<class T>
class Myclass
{
public:
    T obj;
    //类模板中成员函数
    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
};

void test01()
{
    Myclass<Person1>m;
    m.func1();

}
int main()
{


    test01();
    return 0;
}