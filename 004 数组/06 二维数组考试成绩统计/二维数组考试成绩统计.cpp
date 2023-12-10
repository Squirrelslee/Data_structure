#include <iostream>
#include <string>
using namespace std;

int main()
{
    int scores[3][3] =
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    string names[3] = {"张","李","王"};
    int sum;
    for(int i = 0;i < 3;i++)
    {
        int sum = 0;
        for(int j = 0;j < 3;j++)
        {
            sum+= scores[i][j];
            cout << scores[i][j] << " ";
        }
        cout << endl;
        cout << names[i] << "的总分：" << sum << endl;
    }

    system("pause");

    return 0;
}