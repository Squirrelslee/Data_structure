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

    student arr[] = {
        {"张三" , 18 , 500},
        {"李四" , 19 , 400},
        {"王五" , 20 , 300}
    };
    cout << sizeof(arr[1].name);
    for(int i = 0;i < 3;i++)
    {
        cout << "\n姓名：" << arr[i].name << "\n年龄："<< arr[i].age << "\n分数："<< arr[i].score;
    }
    system("pause");
    return 0;
}