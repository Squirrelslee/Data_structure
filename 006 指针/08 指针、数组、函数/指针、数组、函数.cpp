#include <iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void maopao(int *arr,int len)
{
    for(int i = 0;i < len - 1;i++)
    {
        for(int j = 0;j < len - i -1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }

        }
    }
}
void print(int *arr,int len)
{
    for(int i = 0;i < len;i++)
    cout << arr[i] << " " << endl;
}
int main()
{

    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    maopao(arr,len);
    print(arr,len);
    system("pause");
    return 0;
}