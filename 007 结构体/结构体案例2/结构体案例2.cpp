#include <iostream>
using namespace std;
#include <string>
#include<ctime>

struct hero
{
    string name;
    int age;
    string gender;
};

int main()
{
    hero harr[] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    for (int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4 - i ;j++)
        if(harr[j].age > harr[j+1].age)
        {
            hero temp;
            temp = harr[j];
            harr[j] = harr[j+1];
            harr[j+1] = temp;
        }
    }
    for (int i = 0;i < 5;i++)
    {
        cout << "英雄名字：" << harr[i].name << "   年龄：" << harr[i].age << "   性别：" << harr[i].gender << endl;
    }
    system("pause");
    return 0;
}