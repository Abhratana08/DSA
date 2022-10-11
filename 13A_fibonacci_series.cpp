#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}
int A[10];

int main()
{
    int n;
    for(int i=0;i<n;i++)
    {
        A[i]=-1;
    }
    cout<<"Enter the number of the term"<<endl;
    cin>>n;
    cout<<"The "<<n<<"th term of fibonacci series is\n"<<fib(n-1)<<endl;
    
    return 0;
}