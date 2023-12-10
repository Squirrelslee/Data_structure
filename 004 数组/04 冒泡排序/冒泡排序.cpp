#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    for(int i = 0; i < 9-1;i++)
    {
        for(int j = 0; j < 9-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    for(int k = 0;k < 9;k++)
    cout << arr[k] << "  ";
    cout << endl;
    system("pause");
    return 0;
}