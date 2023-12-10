#include <iostream>
using namespace std;
#include <string>

//1、值传递
void swap01(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;

}
//2、地址传递
void swap02(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;     
}
//3、引用传递
void swap03(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 10;
    int b = 20;
    swap01(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap02(&a,&b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap03(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    system("sleep 1s");

    return 0;
}