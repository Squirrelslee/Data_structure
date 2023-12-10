#include <iostream>
using namespace std;
int func(int a = 10 ,int b = 20 ,int c = 30);

int main()
{
    int d = func(10,30);
    cout << "d = " << d << endl;
    int e = func(5,6,7);
    cout << "e = " << e << endl;
    system("pause");

    return 0;
}
int func(int a,int b,int c)
{
    return a + b + c;
}