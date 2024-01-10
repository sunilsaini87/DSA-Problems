#include <iostream>
using namespace std;

int findUniq(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    int arr[x];
    return 0;
}

// Half