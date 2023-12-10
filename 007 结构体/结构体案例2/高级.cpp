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

void maopao(hero harr[] , int len)
{
        for (int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4 - i ;j++)
        if(harr[j].age > harr[j+1].age)
        {
            hero temp = harr[j];
            harr[j] = harr[j+1];
            harr[j+1] = temp;
        }
    }
}
void printall(hero harr[] , int len)
{
    for(int i = 0;i < len;i++)
    {
        cout << "英雄名字：" << harr[i].name << "   年龄：" << harr[i].age << "   性别：" << harr[i].gender << endl;
    }
}
int main()
{
    hero harr[] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof(harr)/sizeof(harr[0]);
    maopao(harr,len);
    printall(harr,len);
    system("pause");
    return 0;
}