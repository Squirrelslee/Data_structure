#include <iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
};
void printStudent(const student *p)//!!!!防止误操作
{
    cout << "子函数中 姓名：" << p->name <<
    "年龄：" << p->age << "分数" << p->score << endl;
}

int main()
{
    
    student s = {"张三",20 ,100};
    printStudent(&s);
    system("pause");
    return 0;
}