#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//查找  内置数据类型
void test01()
{
    vector<int>v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find(v.begin(),v.end(),5);
    if(it == v.end())
    cout << "no find " << endl;
    else
    cout << "find : " << *it << endl;
}
//查找  自定义数据类型
class Person
{
public:
    Person(string name , int age)
    {
        this->M_name = name;
        this->M_age = age;
    }
    bool operator==(const Person &p)
    {
        if(this->M_name == p.M_name && this->M_age == p.M_age)
            return true;
            else
            return false;

    }
    string M_name;
    int M_age;
};

void test02()
{
    vector<Person>v;
    Person p1("marklee", 23);
    Person p2("super" , 23);
    Person p3("mark" , 5);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    Person pp("mark",5);
    vector<Person>::iterator it = find(v.begin(),v.end(),p3);
        if(it == v.end())
    cout << "no find " << endl;
    else
    cout << "find : " << it->M_name << ' ' << it->M_age << endl;
}
int main()
{

    test01();
    test02();
    return 0;
}