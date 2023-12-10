#include <iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
};
struct teacher
{
    int id;
    string name;
    int age;
    student stu;
};

int main()
{

    student stu ={"张三" , 18 ,100};
    teacher wang = {9527 , "老王" , 40 , stu};
    cout  << "\n老师ID："<< wang.id << "\n老师姓名："<< wang.name << "\n老师年龄："<< wang.age 
    << "\n学生姓名："<< wang.stu.name << "\n学生年龄："<< wang.stu.age << "\n学生分数："<< wang.stu.score << endl;
    
    system("pause");
    return 0;
}