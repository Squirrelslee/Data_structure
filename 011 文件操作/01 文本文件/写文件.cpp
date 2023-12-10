#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs << "Hello world" << endl;
    ofs << "你好" << endl;
    ofs.close();
}

int main()
{
    test01();
    return 0;
}