#include <iostream>
using namespace std;

class Person
{
public:
    int m_age;
    int* m_Height;
    Person()
    {
        cout << "Person 默认构造函数调用" << endl;
    }
    Person(int age,int height)
    {
        m_Height = new int(height);
        m_age = age;
        cout << "Person 有参构造函数调用" << endl;
    }
    //自己实现拷贝构造函数 解决浅拷贝带来的问题
    Person(const Person &p)
    {
        cout << "Person 拷贝构造函数调用" << endl;
        // m_Height = p.m_Height;编译器默认实现就是这行代码
        m_age = p.m_age;
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        //析构代码，将堆区开辟的数据释放
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person 析构函数调用" << endl;
    }

};

void test01()
{
    Person p1(18,160);
    cout << "p1的年龄：" << p1.m_age << "身高为：" << *p1.m_Height << endl;
    Person p2(p1);
    cout << "p2的年龄：" << p2.m_age << "身高为：" << *p2.m_Height << endl;    
}
int main()
{
    test01();
    system("sleep 1s");
    return 0;
}