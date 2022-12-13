#include <iostream>
using namespace std;
typedef unsigned long long ull;
ull combination(ull n,ull k)
{
    ull result=1;
    if(n-k< k)
    {
        k=n-k;
    }
    for(ull i=0;i<n;i++)
    {
        result*=(k-i);
        result/=i;
    }
    return result;
}
int main()
{
   
 int t;
   cin>>t;
   while(t--)
   {
       ull n,k;
   cin>>n>>k;
   k-=n;
    cout<<combination(n,k);}
    
    return 0;
}