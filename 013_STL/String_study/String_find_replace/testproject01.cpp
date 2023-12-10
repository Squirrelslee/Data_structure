#include <iostream>
#include <string>
using namespace std;

void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("dew");//从左往右
    if(pos == -1)
    {
        cout << "no find!" << endl;
    }
    else
    {
        cout << "pos = " << pos << endl;
    }
    pos = str1.rfind("de");//从右往左查找
    cout << "pos = " << pos << endl;    
}
void test02()
{
    string str2 = "abcdefgh";
    str2.replace(1,3,"1111");
    cout << str2 << endl;
}
int main()
{

    test02();



    return 0;
}