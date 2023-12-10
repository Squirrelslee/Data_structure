#include <iostream>

using namespace std;

class Calculator
{
public:
    static int a;
    static int b;
    virtual int func()
    {
        return 0;
    }
};
int Calculator::a = 10;
int Calculator::b = 5;
class add:public Calculator
{
    int func()
    {
        return a + b;
    }
};
class sub:public Calculator
{
    int func()
    {
        return a - b;
    }
};
class mul:public Calculator
{
    int func()
    {
        return a * b;
    }
};
class div1:public Calculator
{
    int func()
    {
        return a / b;
    }
};
int GetResult(Calculator &calculator)
{
    return calculator.func();
}
void test01()
{   
    Calculator m;
    m.a = 200;
    m.b = 300;
    add w;
    sub x;
    mul y;
    div1 z;

    cout << "a + b = " << GetResult(w) << endl;
    cout << "a - b = " << GetResult(x) << endl;
    cout << "a * b = " << GetResult(y) << endl;
    cout << "a / b = " << GetResult(z) << endl;

}
int main()
{

    test01();
    return 0;
}