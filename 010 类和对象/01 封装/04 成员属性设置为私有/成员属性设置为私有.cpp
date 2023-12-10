#include <iostream>
using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性
class Person
{
private:
    string m_name;//可读可写

    int m_age;//只读

    string m_lover;//只写

public:
    //设置姓名
    void setname(string name)
    {
            m_name = name;
    }
    //获取姓名
    string getname()
    {
        return m_name;
    }
    void setage(int age)
    {
        if(age>0&&age<150)
        {
            m_age = age;
        }
        else
        {
            cout << "错误！" <<endl;
            m_age = 0;
        }
    }
    //只读
    int getage()
    {
        return m_age;
    }

    //只写
    void setlover(string love)
    {
        m_lover = love;
    }
 };   

int main()
{
    Person p;
    p.setname("小李");

    int age;
    cout << "请输入年龄：" << endl;
    cin >> age;
    p.setage(age);
    cout << "姓名：" << p.getname() << "\t";
    cout << "年龄:" << p.getage() << endl;
    p.setlover("小红");
    system("sleep 1s");
    return 0;
}