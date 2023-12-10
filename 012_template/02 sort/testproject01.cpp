#include <iostream>
using namespace std;
template<class T>
void swap(T &a,T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
//排序算法
template<class T>
void mySort(T arr[] , int len)
{
    for(int i = 0 ; i < len-1 ; i++ )
    {
        for(int j = 0 ; j <len-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                T temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
template<class T>
void printf(T arr , int len)
{
    for(int i = 0;i<len ;i++)
    {
        cout << arr[i] << " ";
    }
}
void test01()
{
    char chararr[] = "afdcklg";
    int len = sizeof(chararr)/sizeof(chararr[0]);
    mySort(chararr,len);
    printf(chararr,len);
}
void test02()
{
    int intarr[] = {1,5,7,9,3,3,7,98,4};
    int len = sizeof(intarr)/sizeof(intarr[0]);
    mySort(intarr,len);
    printf(intarr,len);
}
int main()
{
    test01();
    cout << endl;
    test02();
    return 0;
}