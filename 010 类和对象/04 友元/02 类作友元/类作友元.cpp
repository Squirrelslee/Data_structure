#include <iostream>
#include <string>
using namespace std;

//类作友元
class Building
{
    friend class GoodGay;
public:

    Building();

public:

    string m_SittingRoom;

private:

    string m_BedRoom;
};

class GoodGay
{
public:
    void visit();//参观函数 访问Building中的m_Height属性
    GoodGay();
    Building * building;
    ~GoodGay();
};
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
void GoodGay::visit()
{
    cout << "好朋友类 正在访问" << building->m_SittingRoom << endl;
    cout << "好朋友类 正在访问" << building->m_BedRoom << endl;
}
//类外写成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
    system("sleep 1s");
    return 0;
}