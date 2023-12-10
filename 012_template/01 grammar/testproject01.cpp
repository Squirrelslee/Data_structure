#include <iostream>

using namespace std;
template <class T>
void swapInt(T &a, T &b) 
{
    T temp;
    temp = a;
    a = b;
    b = temp;

}

int main()
{
    char chararr[] ="adgg";
    //自动类型推导
    swapInt(chararr[1],chararr[2]);
    //显示指定类型
    swapInt<char>(chararr[1],chararr[2]);
    cout << "a = " << chararr[1] << endl;
    cout << "b = " << chararr[2] << endl;
    return 0;
}