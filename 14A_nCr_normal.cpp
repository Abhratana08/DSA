#include<iostream>
using namespace std;

int fact(int);
int C(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else 
        return n*fact(n-1);
}
int main()
{
    int r,n;
    cout<<"Enter the value of n in nCr"<<endl;
    cin>>n;
    cout<<"Enter the value of r in nCr"<<endl;
    cin>>r;
    cout<<"The value of "<<n<<"C"<<r<<" is "<<C(n,r)<<endl;
    
    return 0;
}