#include <iostream>

using namespace std;
int main()
{
    int pig1 = 0,pig2 = 0,pig3 = 0;
    cout << "请分别输入三只小猪的重量。\n";
    cout << "小粉猪重：";
    cin >> pig1;
    cout << "小紫猪重：";
    cin >> pig2;
    cout << "小黑猪重：";
    cin >> pig3;
    if(pig1 > pig2)
    {
        if(pig1>pig3)
        {
            cout << "小粉猪最重";
        }
        else if(pig1==pig3)
        {
            cout << "小黑和小粉猪最重";
        }
        else
        {
            cout << "小黑猪最重";
        }
    }
    else if(pig1 == pig2)
    {
        if(pig1 > pig3)
        {
            cout << "小粉和小紫猪最重";
        }
        else if(pig1 == pig3)
        {
            cout <<"三只猪一样重";
        }
        else
        {
            cout << "小黑猪最重";
        }
    }
    else
    if(pig2 > pig3)
    {
        cout << "小紫猪最重";
    }
    else if(pig2 == pig3)
    {
        cout << "小紫和小黑最重";
    }
    else 
    {   
        cout << "小黑最重";
    }


    system("pause");
    
    return 0;
}