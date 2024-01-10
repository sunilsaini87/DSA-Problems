#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {1,5,3,55,6,8,7,23,12,13};
    insertionSort(arr1,10);
    printArray(arr1,10);

    return 0;
}
