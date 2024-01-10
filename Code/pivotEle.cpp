#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
    //return end;
}
int main()
{

    int arr1[5] = {18, 20, 2, 8, 9};
    int index = pivot(arr1, 5);
    cout << index;

    return 0;
}
