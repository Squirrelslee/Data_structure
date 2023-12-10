#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    cout << "请给整型变量a赋值：" << endl;
    cin >> a;
    cout << "整型变量a = " << a << endl;

    float b = 3.14f;
    cout << "请给浮点型变量b赋值：" << endl;
    cin >> b;
    cout << "浮点型变量b = " << b << endl;

    char c = 'a';
    cout << "请给字符型变量c赋值：" << endl;
    cin >> c;
    cout << "字符型变量c = " << c << endl;

    string d = "sadsad";
    cout << "请给字符串d赋值：" << endl;
    cin >> d;
    cout << "字符串d = " << d << endl;

    bool flag = true;
    cout << "请给bool flag赋值：" << endl;
    cin >> flag;
    cout << "flag = " << flag << endl;

    system("pause");

    return 0;
}
