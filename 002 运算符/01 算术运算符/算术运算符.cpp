#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a1=10;
    double b1=3;
    cout << a1/b1 <<endl;
    int a = 10;
    ++a; //先让变量+1然后进行表达式运算
    cout << "a = " << a << endl;
    int b = 10;
    b++;//先进行表达式然后让变量+1
    cout << "b = " << b << endl;

    int a2 = 10;
    int b2 = ++a2*10;
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;

    int a3 = 10;
    int b3 = a3++*10;
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;
    
    system("pause");
    return 0;
}