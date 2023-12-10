#include <iostream>

using namespace std;
#include <list>

void printlist(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

void test01()
{
    list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    L1.push_back(50);
    printlist(L1);
    list<int>L2(L1.begin(),L1.end());
    printlist(L2);
    list<int>L3(L2);
    printlist(L3);
    list<int>L4(10,100);
    L4.assign(10,1000);
    printlist(L4);
    L1.swap(L4);
    printlist(L1);
    printlist(L4);
}

int main()
{
    test01();


    return 0;
}