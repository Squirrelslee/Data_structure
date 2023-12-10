#include <iostream>

using namespace std;

void test01()
{
    string str1 = "hello";
    cout << str1 << endl;
    str1[2] = 'b';
    str1.at(1) = 'c';
    for(int i = 0; i < str1.size() ;i++)
    {
        cout << str1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < str1.size() ;i++)
    {
        cout << str1.at(i) << ' ';
    }
    cout << endl;
}

int main()
{

    test01();

    return 0;
}