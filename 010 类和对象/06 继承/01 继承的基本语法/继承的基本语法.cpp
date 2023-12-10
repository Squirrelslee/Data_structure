#include <iostream>

using namespace std;

class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登陆、注册。。。（公共头部）" <<endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作" << endl;
    }
    void left()
    {
        cout << "Java、Python..." << endl;
    }
};
class Java:public BasePage
{
public:
    void content()
    {
        cout << "Java视频内容" << endl;
    }
};
class Python:public BasePage
{
public:
    void content()
    {
        cout << "Python视频内容" << endl;
    }
};
class Cpp:public BasePage
{
public:
    void content()
    {
        cout << "C++视频内容" << endl;
    }
};
void test01()
{
    Cpp cp;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
}
int main()
{
    test01();
    return 0;
}