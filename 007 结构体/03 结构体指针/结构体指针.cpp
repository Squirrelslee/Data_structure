#include <iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
};//顺便创建一个结构体变量


int main()
{
    struct student stu = {"张三",18,100};
    struct student * p = &stu;
    p->name = "小李";
    cout << p->name << p->age << p->score;
    system("pause");
    return 0;
}