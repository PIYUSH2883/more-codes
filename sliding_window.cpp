#include<iostream>
using namespace std;
int main()
{   int i=0;
    int A[10]{10,20,20,40,50,60,70,80,90,100};
       while(i<=7)
       {
        if(A[i]>=A[i+1]&&A[i]>=A[i+2])
        cout<<A[i]<<endl;
        if(A[i+1]>=A[i]&&A[i+1]>=A[i+2])
        cout<<A[i+1]<<endl;
        if(A[i+2]>=A[i]&&A[i+2]>=A[i+1])
        cout<<A[i+2]<<endl;
        i++;

        }



    return 0;
    
}