#include<iostream>
using namespace std;

int A[10];
int fib2(int n)
{
    if(n<=1){
        A[n]=n;
        return n;
    }
    else{
        if(A[n-2]==-1){
            A[n-2]=fib2(n-2);
        }
        if(A[n-1]==-1){
            A[n-1]=fib2(n-1);
        }
        return A[n-1]+A[n-2];
    }
}
int main()
{
    int n;
    cout<<"Enter the number of the term"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        A[i]=-1;
    }
    cout<<"The "<<n<<"th term of fibonacci series is\n"<<fib2(n-1)<<endl;
    
    return 0;
}