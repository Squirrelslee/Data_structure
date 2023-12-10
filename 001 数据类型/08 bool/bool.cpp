#include <iostream>

using namespace std;

int main()
{
    //创建bool数据类型
    bool flag = true;//true为1；
    cout << flag << endl;
    flag = false;    //true为0
    cout << flag << endl;
    cout << "bool所占空间内存:" << sizeof(bool) << endl;

    system("pause");

    return 0;
}