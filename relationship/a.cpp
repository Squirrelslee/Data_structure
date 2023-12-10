
#include<iostream>
using namespace std;

int add(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
}
class 	abc
{
    char a;
	char b;
	int c;
	double d;
};
class person
{
public:
	char a = 'a';
	double b = 1.1;
	int c = 1;
	char d = 'b';
    person()
    {
        cout << &a << endl;
        cout << &b << endl;
        cout << &c << endl;
        cout << &d << endl;        
    }
};
void test()
{
    person pe;
}
int main()
{

    test();

	return 0;
}