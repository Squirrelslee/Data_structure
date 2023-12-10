#include <iostream>
using namespace std;
#include <string>
#include<ctime>
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    student sarr[5];
};
//给老师学生赋值
void allocateSpace(teacher tarr[] , int len)
{
    string nameSeed = "ABCDE";
    //给老师赋值
    for(int i = 0;i < len ;i++)
    {
        tarr[i].name = "Teacher_";
        tarr[i].name += nameSeed[i];
        for(int j = 0;j < 5;j++)
        {
            tarr[i].sarr[j].name = "Student_";
            tarr[i].sarr[j].name += nameSeed[j];
            int random = rand()%41+60;
            tarr[i].sarr[j].score = random;
        }
        
    }

}
void printall(teacher tarr[],int len)
{
    srand((unsigned int)time(NULL));
    for(int i  = 0;i < len ;i++)
    {
        cout << "老师姓名：" << tarr[i].name <<endl;
        for (int j = 0;j < 5; j++)
        cout << "\t学生姓名：" << tarr[i].sarr[j].name
        << " 考试分数：" << tarr[i].sarr[j].score << endl;
    }
}

int main()
{
    struct teacher tarr[3];
    int len = sizeof(tarr)/sizeof(tarr[0]);
    allocateSpace(tarr , len);
    printall(tarr,len);

    system("pause");
    return 0;
}