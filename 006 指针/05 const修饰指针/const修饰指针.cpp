#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int b = 20;
    //1、常量指针
    // const int * p = &a;
   // *p = 20;错误，指针指向的指不可修改
//    p = &b;//正确，指针的指向从指向a的地址更改为指向b的地址
//    cout << *p << endl;

    //2、指针常量
    int * const p = &a;
    * p =20;
    cout << * p << endl;
    //* p = &b;错误，常量修饰指针，指针指向的地址不可修改

    const int * const p = &a;//指针的指向和指针指向的值都不可以修改


    system("pause");
    return 0;
}