#include <iostream>

using namespace std;

class Person
{

public:
int age;
    Person()//无参（默认构造函数）
    {
        cout << "Person的构造函数调用" << endl;
    }

    Person(int a)//有参
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    //拷贝构造函数
    Person(const Person &p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        //将传入的人身上的所有属性，拷贝到我身上
        age = p.age;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

};

void test01()
{
    // //括号法
    // Person p1;
    // Person p2(10);//调用有参构造函数
    // //调用拷贝函数
    // Person p3(p2);

    // //注意事项：调用默认构造函数时，不要加（）
    // //因为下面这行代码，编译器会认为是一个函数声明；
    // //Person p4();
    // //void func();
    // cout << "p2的年龄：" << p2.age <<endl;
    // cout << "p3的年龄：" << p3.age <<endl;

    // //显示法
    // Person p1;
    // Person p2 = Person(10);//调用有参构造
    // Person p3 = Person(p2);
    // Person(10);//匿名对象    特点：当前行执行结束后，系统会立即回收匿名对象
    // cout << "aaaaaa" << endl;
    // //注意事项：不要利用拷贝构造函数 初始化匿名对象
    // //Person(p3);编译器会认为 Person(p3) === Person p3;
    // //隐式转换法

    Person p4 = 10;//相当于写了Person p4 = Person(10);
    Person p5 = p4;
}




int main()
{

    test01();
    system("sleep 1s");
    return 0;
}