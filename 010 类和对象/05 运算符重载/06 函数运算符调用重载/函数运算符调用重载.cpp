#include <iostream>
#include <string>
using namespace std;

//函数调用运算符重载

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test <<endl;
    }
};
class add
{
public:
    int operator()(int num1,int num2)
    {
        return num1 + num2;
    }
};
void test01()
{
    MyPrint myPrint;
    myPrint("hello world!");
}
void test02()
{
    add sum;
    int ret = sum(1,1);
    cout << ret << endl;
}
int main()
{
    test01();
    test02();
    //匿名函数对象
    cout << add()(100,100) << endl;

    return 0;
}