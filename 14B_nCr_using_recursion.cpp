#include<iostream>
using namespace std;

int C(int n,int r)
{
    if(r==0||r==n)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
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