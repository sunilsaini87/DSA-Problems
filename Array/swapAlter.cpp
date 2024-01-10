#include <iostream>
using namespace std;

int swapAlter(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i+1<n)
        {
            swap(arr[i], arr[i+1]);
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    swapAlter(arr,4);

    return 0;
}
