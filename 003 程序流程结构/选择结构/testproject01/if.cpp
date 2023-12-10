#include <iostream>

using namespace std;

int main()
{
    //选择中单行
    int a=0;
    cout << "请输入高考考了多少分：";
    cin >> a;
     cout << "您考了：" << a << endl;
    if(a >= 600)
    {
        cout << "考上一本了！" << endl;  
        if(a >=700)
        {
            cout << "考上了清华！" << endl;
        }
        else if(a >= 650)
        {
            cout << "考上了北大！" << endl;
        }
        else
        {
            cout << "考上了人大！" << endl;               
        }        
    }
    else if(a >= 450)
    {
        cout << "考上二本了！" << endl;
    }
    else
    {
        cout << "选个专科吧！" << endl;        
    }
    system("pause");

    return 0;  
}