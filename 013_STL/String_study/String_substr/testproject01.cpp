#include <iostream>

using namespace std;

void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1,3);
    cout << subStr << endl;
    string str1 = "1525076988@qq.com";
    int pos = str1.find("@");
    subStr = str1.substr(0,pos);
    cout << subStr << endl;

}

int main()
{

    test01();
    return 0;
}