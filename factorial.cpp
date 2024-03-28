#include <iostream>
using namespace std;

int fact(int n ){

    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    
}

int main(int argc, char const *argv[])
{

    int n ;
    cout<<"Enter a Number "<<endl;
    cin>>n;

    cout<<"Factorial is "<<fact(n);
    
    return 0;
}
