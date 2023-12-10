#include <iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
}s3;//顺便创建一个结构体变量


int main()
{
    struct student s1;
    //struct关键字可以省略
    s1.age = 18;
    s1.name = "张三";
    s1.score = 500;
    cout << "姓名：" << s1.name << "\n年龄：" << s1.age << "\n分数：" << s1.score << endl;
    struct student s2 = {"李四", 19 ,560};
    cout << "姓名：" << s2.name << "\n年龄：" << s2.age << "\n分数：" << s2.score << endl;
    s3.name = "王五";
    s3.age = 20;
    s3.score = 300;
    cout << "姓名：" << s3.name << "\n年龄：" << s3.age << "\n分数：" << s3.score << endl;

    system("pause");
    return 0;
}