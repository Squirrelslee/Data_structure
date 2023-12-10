#include <iostream>

#include <vector>


using namespace std;


void test01()
{
    vector<int>v2;
    v2.reserve(100000);
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    for(int i = 0; i < 10000; i++)v2.push_back(i);
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
}

int main()
{

    test01();
    return 0;
}