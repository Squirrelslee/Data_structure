#include <iostream>

using namespace std;
int main()
{
    int score = 0;
    cout << "给电影打分：";
    cin >> score;
    cout << "您打的分数为：" << score << endl;

    switch(score)
    {
        case 10:
            cout << "您认为是经典电影" << endl;
            break;
        case 9:
            cout << "您认为是很好电影" << endl;
            break;
        case 8:
            cout << "您认为是一般的电影" << endl;
            break;
        default:
            cout << "您认为这是一个烂片"<< endl;
            break;
    } 
    system("pause");
    
    return 0;
}