#include <iostream>
#include <string>
using namespace std;

class Building 
{
    friend void goodGay(Building *building);//goodGay全局函数是Building好朋友，可以访问Building中私有成员
public:
    Building()
    {
        m_sittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_sittingRoom;
private:
    string m_BedRoom;
};

//全局函数

void goodGay(Building *building)
{
    cout << "好朋友全局函数 正在访问" << building->m_sittingRoom <<endl;
    cout << "好朋友全局函数 正在访问" << building->m_BedRoom <<endl;
}
void test01()
{
    Building building;
    goodGay(&building);
}
int main()
{
    test01();
    system("sleep 1s");
    return 0;
}