#include "testproject01.hpp"
void test01()
{
    Person<string,int>p2("marklee",23);
    p2.ShowPerson();
}
int main()
{

    test01();

    return 0;
}