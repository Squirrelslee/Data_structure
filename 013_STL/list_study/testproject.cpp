#include <bits/stdc++.h>

using namespace std;

void print(list<int>const &l)
{
    for(list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
}

void test01()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.end() = l.begin();
    cout << &l.back() << endl;
    cout << &l.front() << endl;
    print(l);
}


int main()
{
    test01();
    return 0;
}