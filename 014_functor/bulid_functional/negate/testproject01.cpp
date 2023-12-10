#include <iostream>
using namespace std;
#include <functional>

void test01()
{
    negate<int>n;
    cout << n(50) << endl;
}

void test02()
{
    plus<int>p;
    cout << p(10,20) << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}