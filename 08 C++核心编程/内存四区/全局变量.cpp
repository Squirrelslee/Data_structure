#include <iostream>
using namespace std;
#include <string>
//全局变量
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;
int main()
{
    //创建普通局部变量
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为：" << &a << endl;
    cout << "局部变量b的地址为：" << &b << endl;
    cout << "全局变量g_a的地址为：" << &g_a << endl;
    cout << "全局变量g_b的地址为：" << &g_b << endl;
    //全局区

    //全局变量、静态变量、常量
    //静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为：" << &s_a << endl;
    cout << "静态变量s_b的地址为：" << &s_b << endl;   
    //常量
    //字符串常量
    cout << "字符串常量的地址为：" << &"hello world" << endl;
    //const 修饰的全局变量
    cout << "全局常量 c_g_a的地址为" << &c_g_a << endl;
    cout << "全局常量 c_g_b的地址为" << &c_g_b << endl;
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "const修饰的局部变量 c_l_a的地址为" << &c_l_a << endl;   
    cout << "const修饰的局部变量 c_l_b的地址为" << &c_l_b << endl;   

    system("sleep 1s");

    return 0;
}