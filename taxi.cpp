#include<iostream>
using namespace std;
int main()
{
    int n,n1=0,n2=0,n3=0,n4=0;
    // cout<<"Enter the number of groups"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        n1++;
        else if(arr[i]==2)
        n2++;
        else if(arr[i]==3)
        n3++;
        else
        n4++;

    }
    int count=0;
    count += n4;
    if(n3<n1)
    {
        count = count +n3;
        n1=n1-n3;
        n3=0;
    }
    if(n3>=n1)
    {
        count =count +n1;
        n3=n3-n1;
        n1=0;

    }
    if(n3>0)
    {
    count = count + n3;
    n3=0;
    }
    if(n2>0)
    {
        count = count + n2/2;
        n2 = n2%2;
    }

    
    int remaining = n1+n2*2;
    if(remaining <= 4 && remaining >0)
    {
        count = count +1;
    }
     else if(remaining%4 !=0)
    {
        count = count + (remaining/4)+1;
    }
    else
    {
        count = count + (remaining/4);
    }
cout<<count ;
return 0;

}