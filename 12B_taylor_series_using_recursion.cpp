#include<iostream>
using namespace std;

double taylor_calculator(int x,int n)
{
    static double s=1;
    // n=n-1;
    if(n==0)
        return s;
    else
    {
        s=1+s*x/n;
        return taylor_calculator(x,n-1);
    }
}
int main()
{
    int x,n;
    cout<<"Enter the power of e"<<endl;
    cin>>x;
    cout<<"Enter the number  of terms"<<endl;
    cin>>n;
    cout<<"The value of e^"<<x<<" for "<<n<<" number of terms is "<<taylor_calculator(x,n)<<endl;
    
    return 0;
}