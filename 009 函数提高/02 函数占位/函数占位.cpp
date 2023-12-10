#include <iostream>
using namespace std;
int func(int a,int);

int main()
{
    int d = func(10,30);
    cout << "d = " << d << endl;
    int e = func(5,6);
    cout << "e = " << e << endl;
    system("pause");
    return 0;
}
int func(int a,int)
{
    return a;
}
