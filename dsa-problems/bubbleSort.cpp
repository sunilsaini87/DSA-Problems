// decreasing order

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    int arr1[] = {1, 5, 3, 55, 6, 8, 7, 23, 12, 13};
    bubbleSort(arr1, 10);
    printArray(arr1, 10);

    return 0;
}
