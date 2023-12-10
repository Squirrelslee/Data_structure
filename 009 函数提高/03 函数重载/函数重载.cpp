#include <iostream>
using namespace std;

void func()
{
    cout << "func的调用" << endl;
}
void func(int a)
{
    cout << "funca的调用" << endl;
}
void func(double a)
{
    cout << "funcd的调用" << endl;
}

int main()
{
    func();
    func(1);
    func(1.1);
    system("pause");
    return 0;
}

