#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int x,y,z;
    while (1)
    {
        x=num%10;//个位
        y=(num/10)%10;//十位
        z=num/100;//百位;
        if(num == x*x*x+y*y*y+z*z*z)
        {
            cout << num << endl;
        }
            num++;
        if(num== 1000)break;
    }
    system("pause");
    return 0;
}