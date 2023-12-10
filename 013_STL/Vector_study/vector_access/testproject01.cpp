#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}
void print(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << ' ';
    }
    cout << endl;
}
void test01()
{
    vector<int>v1;
    for(int i = 0; i < 10; i++)v1.push_back(i);
    print(v1);
    cout << v1.front() << endl;
    cout << v1.back() << endl;
}

int main()
{

    test01();
    return 0;
}