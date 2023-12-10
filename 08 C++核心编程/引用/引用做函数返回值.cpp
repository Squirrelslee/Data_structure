#include <iostream>
using namespace std;
#include <string>
int& test01()
{
    static int a = 10;//存放在栈区
    return a;
}

int main()
{
    int& ref = test01();
    cout << ref << endl;
    cout << ref << endl;
    test01() = 1000;
    cout << ref << endl;
    cout << ref << endl;
 
    system("sleep 1s");

    return 0;
}