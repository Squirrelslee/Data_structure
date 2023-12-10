#include <iostream>

using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base构造" << endl;
    }
    ~Base()
    {
        cout << "Base析构" << endl;
    }
};
class son:public Base
{
public:
    son()
    {
        cout << "son构造" << endl;
    }
    ~son()
    {
        cout << "son析构" << endl;
    }
};
void test01()
{
    // Base b1;
    son s1;
}
int main()
{
    test01();
    return 0;
}