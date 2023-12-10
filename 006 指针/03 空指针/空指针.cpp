#include <iostream>

using namespace std;

int main()
{
    //空指针用于给指针变量进行初始化
    int * p = NULL;
    //空指针是不可以进行访问的
    //错误* p = 100;
    //错误cout << *p << endl;
    //0～255之间的内存编号是系统占用的，因此不可以访问



    system("pause");
    return 0;
}