#include <iostream>
#include <set>
using namespace std;



// void test01()
// {
//     set<int>s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(11);
//     s.insert(20);
//     s.insert(15);
//     s.insert(13);
//     s.insert(13);

//     multiset<int>m;
//     m.insert(10);
//     m.insert(5);
//     m.insert(10);      
//     printSet(m);  
// }
// class Mycompare
// {
// public:
//     bool operator()(int v1, int v2)
//     {
//         return v1 > v2;
//     }
// };
// void printSet(set<int,Mycompare>&s)
// {
//     for(set<int,Mycompare>::const_iterator it = s.begin(); it !=s.end(); it++)
//     {
//         cout << *it << ' ';
//     }
//     cout << endl;
// }
// void test02()
// {

//     set<int,Mycompare>s2;
//         s2.insert(1);
//     s2.insert(2);
//     s2.insert(6);
//     s2.insert(3);
//     s2.insert(4);
//     s2.insert(7);
//     s2.insert(9);
//     printSet(s2);

// }

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
class Mycompare
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.M_age < p2.M_age;
    }
};
void printSet(set<Person,Mycompare>s)
{
    for(set<Person,Mycompare>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << it->M_name << ' ' << it->M_age << endl;
    }
}

void test03()
{
    Person p1("Marklee" , 20);
    Person p2("李弘扬", 23);
    Person p3("zz", 24);
    set<Person,Mycompare>s;
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    printSet(s);
}

int main()
{
    test03();
    return 0;
}