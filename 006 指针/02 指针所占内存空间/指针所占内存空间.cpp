#include <iostream>

using namespace std;

int main()
{
    //指针所占内存空间大小64位占8字节

    int a = 10;
    int *p = &a;
    cout << "sizeof(int *) = "<<sizeof(int *) << endl;
    cout << "sizeof(char *) = "<<sizeof(char *) << endl;
    cout << "sizeof(float *) = "<<sizeof(float *) << endl;
    cout << "sizeof(double *) = "<<sizeof(double *) << endl;
    system("pause");
    return 0;
}