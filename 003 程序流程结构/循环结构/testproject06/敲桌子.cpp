#include <iostream>
using namespace std;

int main()
{
    int x,y;
    for(int i = 1; i <= 100;i++)
    {
        x=i%10;
        y=(i/10)%10;
        if(i % 7 == 0 || x == 7 || y == 7)
        {
            cout << "敲桌子！" << endl;
        }
        else
        cout << i << endl;
    }
    system("pause");
    return 0;
}