#include <iostream>

using namespace std;

//纯虚函数抽象类
class Base
{
public:
    //只要有一个纯虚函数，这个类称为抽象类
    //抽象类特点：
    //1、无法实例化对象
    //2、抽象类的子类 必须要重写父类的纯虚函数，否则也属于抽象类
    virtual void func() = 0;
};
class son:public Base
{
public:
};
class son1:public Base
{
public:
    void func()
    {
        cout << "func函数调用" << endl;
    }
};
int main()
{
    // Base s;
    // new Base;无法实例化
    //son s;    抽象类的子类 必须要重写父类的纯虚函数，否则也属于抽象类
    son1 s;//重写可以实例化
    Base *base = new son1;
    base->func();
    return 0;
}