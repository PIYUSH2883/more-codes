
//program to find sum of digits of a number
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum;
    return 0;
}