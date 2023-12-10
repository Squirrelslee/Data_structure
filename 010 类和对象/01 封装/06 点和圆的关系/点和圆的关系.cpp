#include <iostream>

using namespace std;

class Circle
{
private:
    int C_r;
public:
void setC_r(int r)
{
    C_r = r;
}
int getC_r()
{
    return C_r;
}

};

class Point
{
private:
    int P_x;
    int P_y;
public:
void setP(int x,int y)
{
    P_x = x;
    P_y = y;
}
int getP_x()
{
    return P_x;

}
int getP_y()
{

    return P_y;
}
};
void compare(Circle &C,Point &P)
{
    int C_P = C.getC_r()*C.getC_r();
    int P_P = P.getP_x()*P.getP_x() + P.getP_y()*P.getP_y();
    if(C_P > P_P)
    {
        cout << "点在圆内" << endl;
    }
    else if(C_P == P_P)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}

int main()
{
    Circle C;
    Point P;
    int C_R,P_x,P_y;
    cout << "请输入圆的半径：";
    cin >> C_R;
    cout << "请输入点的x轴：";
    cin >> P_x;
    cout << "请输入圆的y轴：";
    cin >> P_y;
    C.setC_r(C_R);
    cout << "圆的半径：" << C.getC_r() << endl;
    P.setP(P_x,P_y);
    cout << "点的位置：(" << P.getP_x() << " , " << P.getP_y() << ")" << endl;
    compare(C,P);
    system("sleep 1s");
    return 0;
}