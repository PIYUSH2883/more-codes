#include<iostream>
using namespace std;
int main()
{
    int T,x,y,z,s;
    cin>>T;

    while (T--)
    {
        cin>>s>>x>>y>>z;
        int n=2;
        s-=z;
        if(x<=s)
        {n--;
        s-=x;}
        if(y<=s)
        {n--;
        s-=y;}
        cout<<n<<endl;
    }
    return 0;
}