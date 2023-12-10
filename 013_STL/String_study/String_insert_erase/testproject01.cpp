#include <iostream>

using namespace std;

void test01()
{
    string str1 = "abcde";
    str1.insert(0,"1");//从0插入1
    str1.erase(0,1);//从0删除1个
    cout << str1 << endl;


}

int main()
{
    test01();


    return 0;
}