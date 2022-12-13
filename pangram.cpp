#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
        int i,flag=0;
    cin>>n;

    
        char str[100];
        cin>>str;
    
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
        }
       
        for(i=97;i<=122;i++)
        { 
            for(int j=0;j<n;j++)
            {
                if(i==str[j])
                {
                    flag=1;
                    break;
                }
                else{
                flag=0;
                }
            }
            if(flag==0)
            goto jump;
        }
         jump:if(flag==1)
        cout<<"YES";
        else
        cout<<"NO";
        
    

    return 0;
}
