#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int>v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //GreaterFive()匿名对象
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if(it == v.end())
    {
        cout << "no find " << endl;
    }
    else
    {
        cout << "find > 5:" << *it << endl;
    }
}

int main()
{

    test01();
    return 0;
}