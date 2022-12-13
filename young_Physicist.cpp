#include<iostream>
using namespace std;
int main()
{
    //write a program to input n vectors
    //and print the resultant vector

    int n,res=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[j]+=a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
         res = res +sum[i];
    }
   
   if(sum[0]==0 && sum[1]==0 && sum[2]==0)
    {cout<<"YES";}
    
    else
    {cout<<"NO";}
    
    return 0;
    }
