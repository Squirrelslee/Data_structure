#include <iostream>

using namespace std;

int main()
{
    int i,x,y=2;
    //添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样。
    srand((unsigned int)time(NULL));
    i = rand()%100+1;
    cout << "猜数字：" << endl;
    while (1)
    {   
        cout << "\n";
        cin >> x;
        if(x>i)
        {

            cout << "猜大了！";
        }
        else if(x == i)
        {
            cout << "猜对了！" << endl;
            //y = 0;
            break;
            //或者break；
        }
        else
        {
            cout << "猜小了！";
        }
    }
}