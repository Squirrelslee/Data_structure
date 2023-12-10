#include <iostream>
#include <string>
using namespace std;

class cube
{
private:
    int m_lenth;
    int m_width;
    int m_height;
public:
    void set_lenth(int lenth)
    {
        m_lenth = lenth;
    }
    void set_width(int width)
    {
        m_width = width;
    }
    void set_height(int height)
    {
        m_height = height;
    }
    int get_lenth()
    {
        return m_lenth;
    }
    int get_width()
    {
        return m_width;
    }
    int get_height()
    {
        return m_height;
    }
    int get_volume()
    {
        return m_lenth*m_width*m_height;
    }
    int get_area()
    {
        return 2*(m_lenth*m_width+m_width*m_height+m_lenth*m_height);
    }
bool compare(cube &c)
{
    if(m_lenth == c.get_lenth() && m_width == c.get_width() && m_height == c.get_height())
    {
        return true;
    }
    else
    {
        return false;
    }
}
};

int volume(int lenth,int width,int height)
{
    return lenth*width*height;
}

int area(int lenth,int width,int height)
{
    return 2*(lenth*width+width*height+lenth*height);
}

bool compare(cube &P,cube &C)
{
    if(P.get_lenth() == C.get_lenth() && P.get_width() == C.get_width() && P.get_height() == C.get_height())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cube P,C;
    int lenth1,width1,height1;
    int lenth2,width2,height2;


    cout << "请输入立方体1长：";
    cin >> lenth1;
    P.set_lenth(lenth1);
    cout << "您输入的长为：" << P.get_lenth() << "cm" << endl;
    cout << "请输入立方体1宽：";
    cin >> width1;
    P.set_width(width1);
    cout << "您输入的宽为：" << P.get_width() << "cm" << endl;
    cout << "请输入立方体1高：";
    cin >> height1;
    P.set_height(height1);
    cout << "您输入的高为：" << P.get_height() << "cm" << endl;

    cout << "请输入立方体1长：";
    cin >> lenth2;
    C.set_lenth(lenth2);    
    cout << "您输入的长为：" << C.get_lenth() << "cm" << endl;
    cout << "请输入立方体1宽：";
    cin >> width2;
    C.set_width(width2);
    cout << "您输入的宽为：" << C.get_width() << "cm" << endl;
    cout << "请输入立方体1高：";
    cin >> height2;
    C.set_height(height2);
    cout << "您输入的高为：" << C.get_height() << "cm" << endl;

    cout << "立方体1体积为：" << P.get_volume() << "cm^3" << endl;
    cout << "立方体1面积为：" << P.get_area() << "cm^2" << endl;
    cout << "立方体2体积为：" << C.get_volume() << "cm^3" << endl;
    cout << "立方体2面积为：" << C.get_area() << "cm^2"  << endl;
    bool cos = compare(P,C);
    bool com = P.compare(C);
    if(com)
    {
        cout << "两个立方体相等" << endl;
    }
    else
    {
        cout << "两个立方体不等" << endl;
    }
    system("sleep 1s");
    return 0;
}