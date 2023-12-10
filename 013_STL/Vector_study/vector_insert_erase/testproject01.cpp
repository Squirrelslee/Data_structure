#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

//插入删除
void test01()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    //插入      第一个参数是迭代器
    v1.insert(v1.begin(),1000);
    printVector(v1);
    v1.insert(v1.begin(),3,1000);
    printVector(v1);
    v1.erase(v1.begin());
    printVector(v1);
    v1.erase(v1.begin(),v1.end());
    printVector(v1);
    v1.clear();
    printVector(v1);
}

int main()
{

    test01();
    return 0;
}