#include <iostream>
#include <queue>
using namespace std;

void test01()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << q.size() << endl;
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << q.size() << endl;

}

int main()
{
    test01();
    return 0;
}