#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal构造" << endl;
    }
    virtual void Speak() = 0;
    //利用虚析构可以解决父类指针释放子类对喜爱嗯时不干净的问题
    // virtual ~Animal()
    // {
    //     cout << "Animal析构" << endl;       
    // }
    //纯虚析构
    //有了纯虚析构  之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;

};
Animal::~Animal()
{
    cout << "Animal的纯虚析构" << endl;
}
class Cat:public Animal
{
public:

    Cat(string name)
    {
        cout << "Cat构造" << endl;
        m_Name = new string(name);
    }
    void Speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }
    ~Cat()
    {
        if(m_Name != NULL)
        {
            cout << "Cat析构" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->Speak();
    //父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
    delete animal;
}

int main()
{
    test01();
    return 0;
}