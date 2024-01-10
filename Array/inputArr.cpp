#include <iostream>
using namespace std;

int main()
{
    // control input size
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[5];
    cout << "Enter a number" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<arr[2];

    return 0;
}
