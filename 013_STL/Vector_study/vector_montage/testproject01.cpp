#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin() ; it < v.end() ; it++)
    {
        cout << *it << ' ';
    }
}

void test01()
{
    vector<int>v1;//无参构造
    for(int i = 0 ; i < 10 ; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    cout << endl;
    vector<int>v2(v1.begin(),v1.end());//区间方式进行构造
    printVector(v2);
    cout << endl;
    vector<int>v3(10,100);//elem方式构造，10个100
    printVector(v3);
    cout << endl;
    vector<int>v4(v3);
    printVector(v4);
    cout << endl;
}


int main()
{
    test01();
    return 0;
}