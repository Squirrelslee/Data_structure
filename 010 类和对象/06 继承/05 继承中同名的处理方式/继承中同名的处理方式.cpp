#include <iostream>

using namespace std;
class Base
{
public:
    void func()
    {
        cout << "Base中func调用" << endl;
    }
    void func(int)
    {
        cout << "Base中func(int)调用" << endl;
    }
    Base()
    {
        a =10;
    }
    int a;

};
class son:public Base
{
public:
    void func()
    {
        cout << "son中func调用" << endl;
    }

    son()
    {
        a =100;
    }
    int a;
};
void test01()
{
    son s1;
    s1.func();
    s1.Base::func();
    s1.Base::func(100);
    cout << s1.a << endl;
    cout << s1.Base::a << endl;
}
int main()
{
    test01();
    return 0;
}