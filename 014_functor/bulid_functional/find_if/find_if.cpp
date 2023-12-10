#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <vector>
class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
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
    v.push_back(8);
    v.push_back(8);
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    bool is = binary_search(v.begin(),v.end(),7);
    int ia = count(v.begin(),v.end(),8);
    if(is)
    cout << "find" << endl;
    else
    cout << "no find " << endl;
    cout << "ia   " << ia << endl;
    int ic = count_if(v.begin(),v.end(),GreaterFive());
    cout << "ic   " << ic << endl;
    if(it == v.end())
    {
        cout << "no find" << endl;
    }
    else
    {
        cout << "find" << "  " << *it << endl;
    }

}

class Person
{
public:
    Person(string name, int age)
    {
        this->M_name = name;
        this->M_age = age;
    }
    string M_name;
    int M_age;
};
class logic__
{
public:
    bool operator()(Person &p)
    {
        return p.M_age > 20;
    }
};
void test02()
{
    vector<Person>v;
    Person p1("marklee", 23);
    Person p2("super" , 23);
    Person p3("mark", 23);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    Person p4("mark", 23);
    vector<Person>::iterator it = find_if(v.begin(),v.end(),logic__());
    if(it == v.end())
        cout << "no find" << endl;
    else
        cout << it->M_name << ' ' << it->M_age << endl;
}

int main()
{

    test01();
    test02();
    return 0;
}