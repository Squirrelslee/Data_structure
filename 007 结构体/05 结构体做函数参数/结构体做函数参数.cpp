#include <iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
};
void printStudent(student s)
{
    cout << "子函数中 姓名：" << s.name <<
    "年龄：" << s.age << "分数" << s.score << endl;
}
void printStudent1(student *p)
{
    cout << "子函数中 姓名：" << p->name <<
    "年龄：" << p->age << "分数" << p->score << endl;
}
int main()
{
    student s = {"张三",20 ,100};
    cout << "\n姓名：" << s.name << "\n年龄："<< s.age << "\n分数："<< s.score << endl;
    printStudent(s);
    printStudent1(&s);
    system("pause");
    return 0;
}