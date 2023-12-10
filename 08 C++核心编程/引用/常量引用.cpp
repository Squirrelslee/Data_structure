#include <iostream>
using namespace std;
#include <string>

void print(const int& a)
{
    cout << a << endl;
}
int main()
{
    int a = 10;
    print(a);
        cout << a << endl;
    int b = 200;
    const int& ref = 10;//加入const后，编译器将代码修改 int temp; const int& ref = temp;
    system("sleep 1s");

    return 0;
}