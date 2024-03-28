#include <iostream>
using namespace std;

int fibonacci(int n ){

    if (n==1 || n==0)
    {
        return n;
    }
    
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char const *argv[])
{

    int n ;
    cout<<"Enter a Number "<<endl;
    cin>>n;

    cout<<"Fibonacci numbers are "<<fibonacci(n);
    
    return 0;
}
