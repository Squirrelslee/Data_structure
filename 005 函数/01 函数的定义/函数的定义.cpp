#include <iostream>
using namespace std;

int add(int x,int y)
{
    return x + y;
}

int main()
{
    int a = 10;
    int b = 20;
    int sum = add(a,b);
    cout << sum << endl;
    system("pause");

    return 0;
}