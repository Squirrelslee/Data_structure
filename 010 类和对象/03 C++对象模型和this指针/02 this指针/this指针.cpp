#include <iostream>

using namespace std;

class Person
{
public:
    Person(int age)
    {
        //this指针指向的是被调用的成员函数所属的对象
        this->age = age;
    }
    Person& Personadd(Person &p)
    {
        this->age += p.age;
        //this指向p2的指针，而*this指向的就是p2这个对象本体
        return *this;
    }
    int age;
};


//1、解决名称冲突
void test01()
{
    Person p1(18);
    cout << "p1 的年龄为：" << p1.age << endl;
}
void test02()
{
    Person p1(10);
    Person p2(10);
    //链式编成思想
    p2.Personadd(p1).Personadd(p1).Personadd(p1);
    cout << "p2 的年龄为：" << p2.age << endl;
}
//2、返回对象本身用 *this
int main()
{
    test01();
    test02();
    system("sleep 1s");
    return 0;
}