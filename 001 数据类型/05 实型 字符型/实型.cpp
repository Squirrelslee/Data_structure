#include <iostream>
using namespace std;

int main()
{
    float num1 = 3.1415926f;//末尾加f提示系统这是float。
    cout << "num1 = " << num1 << endl;
    double num2 = 3.1415926;
    cout << "num2 = " <<num2 << endl;
    cout << "float 占用内存空为" << sizeof(float) << endl;
    cout << "double 占用内存空为" << sizeof(double) << endl;
    float num3 = 3e2f;
    double num4 = 3e-2;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    //科学计算法

    system("pause");
    return 0;    
}