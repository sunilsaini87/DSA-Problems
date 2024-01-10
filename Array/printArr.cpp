#include <iostream>
using namespace std;

void printArr(int array1[])
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << array1[i] << " ";
    }
}

int main()
{
    int arr[22] = {2, 7, 8, 9, 44, 77, 67};
    printArr(arr);
    int size1 = sizeof(arr) / sizeof(int);
    cout << size1;

    return 0;
}
