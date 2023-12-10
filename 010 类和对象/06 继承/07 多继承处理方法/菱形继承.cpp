#include <iostream>
using namespace std;
//动物类
class Animal
{
public:
    int m_age;
};
//羊类
class Sheep:virtual public Animal{};
//驼类
class Tuo:virtual public Animal{};
//羊驼类
class SheepTuo:public Sheep,public Tuo{};
void test01()
{
    SheepTuo st;
    st.Sheep::m_age = 18;
    st.Tuo::m_age = 28;
    //当菱形继承，两个父类拥有相同数据，需要加以作用域区分
    cout << "st.Sheep::m_age = " << st.Sheep::m_age <<endl;
    cout << "st.Tuo::m_age = " << st.Tuo::m_age <<endl;
    cout << "st.m_age = " << st.m_age << endl;
}
int main()
{
    test01();

    return 0;
}