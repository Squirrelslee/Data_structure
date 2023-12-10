#include <iostream>
#include "speechManager.h"
using namespace std;
int choice;


int main()
{
    SpeechManager sm;

    while(true)
    {
        sm.Show_Menu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;//接受用户的选项
        switch (choice)
            {
                case 1: //开始比赛
                sm.startSpeech();
                    break;
                case 2: //查看记录
                sm.loadRecord();
                sm.showRecord();
                    break;
                case 3: //清空记录
                    break;
                case 0: //退出系统
                sm.exitSystem();
                    break;
                default:
                    system("clear");
                    break;
            }
    }


    return 0;
}