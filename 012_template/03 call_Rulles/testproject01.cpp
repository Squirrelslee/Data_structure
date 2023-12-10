#include<iostream>
using namespace std;

//普通函数与模板函数调用规则

void myprint(int a,int b)
{
    cout << "调用的普通函数" << endl;
}
template<class T>
void myprint(T a,T b)
{
    cout << "调用的模板函数" << endl;
}
template<class T>
void myprint(T a,T b,T c)
{
    cout << "调用重载的模板函数" << endl;
}
void test01()
{
    int a = 10;
    int b = 20;
    int c = 30;
    myprint<>(a,b,c);

}

int main()
{
    test01();
    return 0;
}