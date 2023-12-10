#include <iostream>

using namespace std;
class AbstractDrinking
{
public:
    //煮水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加入辅料
    virtual void PutSomething() = 0; 
    void makeDrink()
{
    Boil();
    Brew();
    PourInCup();
    PutSomething();
}
};
class Coffee:public AbstractDrinking
{
    void Boil()
    {
        cout << "煮水" << endl;
    }
    void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    void PutSomething()
    {
        cout << "加入牛奶" << endl;
    }
};
class tea:public AbstractDrinking
{
    void Boil()
    {
        cout << "煮水" << endl;
    }
    void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    void PutSomething()
    {
        cout << "加入柠檬" << endl;
    }
};


void dowork(AbstractDrinking *abs)
{
    abs->makeDrink();
    delete abs;//释放
}

void test01()
{
    //制作咖啡
    dowork(new Coffee);
    cout << "------------------------" << endl;
    dowork(new tea);
}
int main()
{

    test01();
    return 0;
}