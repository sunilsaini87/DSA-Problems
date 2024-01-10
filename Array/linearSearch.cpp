#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key" << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}
