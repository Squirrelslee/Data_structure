#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,12,5435,435,4,543,5,43};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    int last = end+1;
    for(int i = 0;i < last;i++)
    cout << arr[i] << "  ";
    cout << endl;
    int temp;
while(end > start)
{
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
for(int i = 0;i < last;i++)
    cout << arr[i] << "  ";
    cout << endl;
    system("pause");
    return 0;
}