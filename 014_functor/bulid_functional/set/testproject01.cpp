#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void printVector(vector<int> &p)
{
    for(vector<int>::iterator it = p.begin(); it != p.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}
class print
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
    vector<int>v1;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
        v1.push_back(i+3);
    }
    printVector(v);
    printVector(v1);
    vector<int>v2;
    v2.resize(v.size()+v1.size());
    vector<int>::iterator it = set_intersection(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),it,print());
    cout << endl;
    vector<int>::iterator ib = set_union(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),ib,print());
    cout << endl;
    vector<int>::iterator ic = set_difference(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),ic,print());e
    cout << endl;
    vector<int>::iterator ia = set_difference(v1.begin(),v1.end(),v.begin(),v.end(),v2.begin());
    for_each(v2.begin(),ia,print());
    cout << endl;

}

int main()
{

    test01();
    return 0;
}