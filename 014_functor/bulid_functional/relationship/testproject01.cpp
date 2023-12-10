#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>
void PrintVector(vector<int> &v)
{
    for(vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << '\t';
    }
    cout << endl;
}
void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    v.push_back(40);
    v.push_back(250);
    v.push_back(50);
    PrintVector(v);
    sort(v.begin(),v.end());
    PrintVector(v);
    sort(v.begin(),v.end(),greater<int>());
    PrintVector(v);
    
}


int main()
{
    test01();
    return 0;
}