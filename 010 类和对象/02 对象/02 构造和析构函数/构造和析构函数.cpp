#include <iostream>

using namespace std;

class Person
{
public:
//构造函数
    Person()
    {
        cout << "Person 构造函数的调用" << endl;
    }
//析构函数
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};
//构造和析构都是必须有的实现，如果我们自己不提供，
//编译器会提供一个空实现的构造和析构
void test01()
{
    Person P;//在栈上的数据，test01执行完毕后，释放这个对象
}
int main()
{
    //test01();
    Person P;

    system("sleep 1s");
    return 0;
}