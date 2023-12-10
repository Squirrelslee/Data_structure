#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <numeric>
void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

class  Compare_
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
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    printVector(v);
    sort(v.begin(),v.end(),Compare_());
    sort(v.begin(),v.end(),greater<int>());
    printVector(v);
    sort(v.begin(),v.end());
    printVector(v);
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    vector<int>v2;
    v2.resize(v.size()+v1.size());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
    printVector(v2);
    reverse(v2.begin(),v2.end());
    printVector(v2);
    random_shuffle(v2.begin(),v2.end());
    printVector(v2);
    int sum = accumulate(v2.begin(),v2.end(),0);
    cout << "acc" << sum << endl;
    vector<int>v3;
    v3.resize(3);
    fill(v3.begin(),v3.end(),3);
    printVector(v3);
    
}

int main()
{
    test01();
    return 0;
}
