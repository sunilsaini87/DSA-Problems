#include <iostream>
using namespace std;

int binarySearching(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int index = binarySearching(arr1, 6, 3);
    cout << index;

    return 0;
}
