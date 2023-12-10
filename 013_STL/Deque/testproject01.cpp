#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printDeque(const deque<int>&v)
{
    for(deque<int>::const_iterator it = v.begin(); it !=v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

void test01()
{
    //构造
    deque<int>d1;
    for(int i = 0; i < 10; i++)
    d1.push_back(i);
    printDeque(d1);
    deque<int>d2(d1.begin(),d1.end());
    printDeque(d2);
    deque<int>d3(10,100);
    printDeque(d3);
    deque<int>d4(d3);
    printDeque(d4);
    cout << endl;
    //赋值
    deque<int>d5;
    d5 = {1,2,3,4,5,10,7};
    printDeque(d5);
    sort(d5.begin(),d5.end());
    printDeque(d5);
    deque<int>d6;
    d6.assign(d5.begin(),d5.end());
    printDeque(d6);
    deque<int>d7;
    d7.assign(10,100);
    printDeque(d7);



}

int main()
{
    test01();

    return 0;
}