#include <iostream>

using namespace std;
template<class T>
class Base
{
public:
    T m;

};
class Son:public Base<int>//必须知道父类中T类型
{
    
};
template <class T,class T1>
class Son1:public Base<T>
{
public:
    T1 obj;
};
void test01()
{
    Son p;
}
void test02()
{
    Son1<int , string>p2;
    p2.m = 10;
    p2.obj = "makrlee";
}
int main()
{

    test02();
    return 0;
}