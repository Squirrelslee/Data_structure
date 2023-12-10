#include <iostream>
using namespace std;

class Person
{
public:
    //this指针的本质 是指针常量     指针的指向是不可以修改的
    void showPerson() const
    {
        age1 = 100;
        //this->age = 100;
        // this = NULL;指针不可以修改指针的指向的
    }
    void func()
    {
        age = 100;
    }

    int age = 100;
    mutable int age1 = 200;//特殊变量，即使在常函数中，也可以修改这个值
};

void test01()
{
    Person p1;
    p1.showPerson();
}
void test02()
{
    const Person p2;
    p2.age1 = 300;
    cout << p2.age << endl;
    //cout << p2.age1 << endl;
    //p2.func();//常对象    不可以调用普通成员函数，因为普通成员函数可以修改属性
}
int main()
{
    test01();
    test02();
    system("sleep 1s");
    return 0;
}