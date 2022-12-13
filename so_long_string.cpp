#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int size,i;
    int n;
    string word;
    // cout<<"Enter how many times you want to enter the word"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>word;
        size=word.size();
        if(size>10)
        cout<<word.at(0)<<(size-2)<<word.at(size-1)<<endl;
        else
        cout<<word;

        size=0;
    }
    return 0;
}
