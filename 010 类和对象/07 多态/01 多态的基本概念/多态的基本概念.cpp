#include <iostream>

using namespace std;

class Animal
{
public:
//虚函数
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat:public Animal
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};
class Dog:public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};
//地址早绑定    在编译阶段确定函数地址
//如果想执行猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animal &animal)
{
    animal.speak();
}
void test01()
{
    Cat cat;
    Dog dog;
    Animal animal;
    doSpeak(cat);
    doSpeak(dog);
    doSpeak(animal);
}
int main()
{
    test01();
    return 0;
}