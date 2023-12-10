#include <iostream>
using namespace std;

void swap(int x,int y)
{
    cout << "交换前：" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "交换后：" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

}

void a()
{

}

void b(int asd)
{

}

int c()
{
    return 0;
}

double d(double gg)
{
    return 0;
}


int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    system("pause");

    return 0;
}