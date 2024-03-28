#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int a = 0, b = 1, c;

    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <=n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
        // return c;
    }
}

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter a Number " << endl;
    cin >> n;

    cout << "Fibonacci number is " << fibonacci(n);

    return 0;
}
