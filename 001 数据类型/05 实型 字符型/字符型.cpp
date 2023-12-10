#include <iostream>
using namespace std;

int main()
{
    //对应ASCII编码
    char ch = 'A';
    cout << "ch = " << (int)ch <<endl;
    cout << "char占内存多大:" << sizeof(char) << endl;
    system("pause");

    return 0;
}