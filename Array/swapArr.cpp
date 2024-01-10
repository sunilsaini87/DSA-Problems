#include <iostream>
using namespace std;

int main()
{
    int arr1[1], arr2[1];
    arr1[1] = {1};
    arr2[1] = {2};

    cout << arr1[1] << " " << arr2[1] << endl;

    int temp[1] = {};
    temp[1] = arr1[1];
    arr1[1] = arr2[1];
    arr2[1] = temp[1];

    cout << arr1[1] << " " << arr2[1];

    return 0;
}
