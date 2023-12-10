#include <iostream>
using namespace std;

#include <algorithm>
#include <vector>
#include <functional>
#include <numeric>

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
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    for_each(v.begin(),v.end(),func());
    cout << endl;

}

int main()
{
    test01();
    return 0;
}