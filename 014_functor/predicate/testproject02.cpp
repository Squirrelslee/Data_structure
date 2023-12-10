#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Compare
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    sort(v.begin(),v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
    cout << "---------------------------------" << endl;
    sort(v.begin(),v.end(),Compare());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
}

int main()
{
    test01();

    return 0;
}