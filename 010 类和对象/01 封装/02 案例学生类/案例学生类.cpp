#include <iostream>
using namespace std;
class student
{

public:
    string name;
    void studentname()
    {
        cout << "学生姓名：" << name << endl;
    }
    long int ID;
    void student_ID()
    {
        cout << "学生ID:" << ID << endl;
    }
};


int main()
{
    student s1,s2;
    s1.name = "李红阳";
    s1.ID = 212022085400049;
    s1.studentname();
    s1.student_ID();
    s2.name = "李四";
    s2.ID = 212022085400000;
    s2.studentname();
    s2.student_ID();
    system("sleep 1s");
    return 0;
}