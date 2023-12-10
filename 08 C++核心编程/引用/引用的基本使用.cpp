#include <iostream>
using namespace std;
#include <string>


int main()
{
    int a = 10;
    int &b = a;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    b = 20;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;    

    system("sleep 1s");

    return 0;
}