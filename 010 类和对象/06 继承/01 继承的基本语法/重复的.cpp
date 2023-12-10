#include <iostream>

using namespace std;

class Java
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
    void content()
    {
        cout << "Java视频内容" << endl;
    }
};
class Python
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
    void content()
    {
        cout << "Python视频内容" << endl;
    }
};
class Cpp
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
    void content()
    {
        cout << "C++视频内容" << endl;
    }
};
void test01()
{
    cout << "--------------------"  << endl;
    cout << "Java视频页面" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "--------------------"  << endl;
    cout << "Python视频页面" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "--------------------"  << endl;
    cout << "C++视频页面" << endl;
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