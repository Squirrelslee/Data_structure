#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Trans
{
public:
    int operator()(int val)
    {
        return val + 100;
    }
};
class func
{
public:
    void operator()(int val)
    {
        cout << val << ' ';
    }
};
void test01()
{
    vector<int>v;
    for(int i = 0; i < 10 ; i++)
    {
        v.push_back(i);
    }
    vector<int>vTargat;
    vTargat.resize(v.size());
    transform(v.begin(),v.end(),vTargat.begin(),Trans());
    for_each(vTargat.begin(),vTargat.end(),func());
    cout << endl;
}

int main()
{
    test01();
    return 0;

}