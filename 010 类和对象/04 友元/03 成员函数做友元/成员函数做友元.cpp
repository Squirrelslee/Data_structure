#include <iostream>
#include <string>
class GoodGay;
class Building;
using namespace std;
class GoodGay
{
public:
    Building *building;
    void visit1();
    void visit2();
    GoodGay();
    ~GoodGay();
}; 
class Building
{
    friend void GoodGay::visit1();
public:
    Building();
private:
    string m_BedRoom;
public:
    string m_SittingRoom;
};
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}
GoodGay::~GoodGay()
{
    if(building != NULL)
    {
        delete building;
        building = NULL;

    }

}
void GoodGay::visit1()
{
    cout << "好朋友成员函数正在访问" << building->m_SittingRoom <<endl;
    cout << "好朋友成员函数正在访问" << building->m_BedRoom <<endl;
}
void GoodGay::visit2()
{
    cout << "好朋友成员函数正在访问" << building->m_SittingRoom <<endl;
}
void test()
{
    GoodGay gg;
    gg.visit1();
    gg.visit2();
}
int main()
{
    test();
    system("sleep 1s");
    return 0;
}
