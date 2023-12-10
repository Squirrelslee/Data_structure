#include <iostream>
using namespace std;

void fun(int& a)
{
    cout << "fun()调用" << endl;

}
void fun(const int& a)
{
    cout << "func()调用" << endl;
    
}
void func(int a)
{
    cout << "func(int a)调用" << endl;
}
void func(int a,int b)
{
    cout << "func(int a,int b)调用" << endl;
}

int main()
{
    int a = 10;
    fun(a);
    func(10);
    system("pause");
    return 0;
}