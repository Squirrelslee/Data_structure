#include <iostream>
using namespace std;
#include <string>
int* func()
{
    //new返回的是该数据类型指针
    int* p = new int(10);
    return p;
}
void test01()
{
    int* p = func();
    cout << *p << endl;
    //堆区的数据由程序员管理开辟、释放
    delete p;
}
void test02()
{
    //创建数组在堆区
    int* arr = new int[10];
    for(int i = 0;i < 10;i++)
    {
        arr[i] = i+100;
    }
    for(int i = 0;i<10;i++)
    {
        cout << arr[i] << endl;
    }
    delete [] arr;

}

int main()
{
    //new基本语法
    test01();
    test02();
    system("sleep 1s");

    return 0;
}