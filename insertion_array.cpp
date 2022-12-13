#include<iostream>
using namespace std;
int sizee(int arr[])
{ int i=0,size=0;
  while(arr[i]!=NULL)
{
    size++;
    i++;
}
return size;
}
void endd(int arr[],int n)
{
    int size=sizee(arr);
    arr[size]=n;

}
void beginning(int arr[],int n)
{    int size=sizee(arr);
        for(int i=(size-1);i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=n;

}
void between(int arr[],int n,int pos)
{
    int size=sizee(arr);
    for(int i=(size-1);i>=(pos-1);i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=n;

}
int main()
{

int arr[20]={5,10,20,30,40,50,90};
int n,i=0,size=0,pos;
int sizee(int arr[]);

cout<<"Enter the element you want to insert in the array"<<endl;
cin>>n;
int choice=0;
cout<<"Enter 1 if you want to insert at beginning"<<endl;
cout<<"Enter 2 if you want to insert at end"<<endl;
cout<<"Enter 3 if you want to insert in between"<<endl;

cin>>choice;
switch (choice)
{
       case 1:
           cout<<"So yo want to insert at beginning"<<endl;
           beginning(arr,n);
           break;
       case 2:
        cout<<"So yo want to insert element at end"<<endl;
        endd(arr,n);
        break;
       case 3:
        cout<<"So you the tricky one !!!!!"<<endl;
        cout<<"Enter the position at which you want to enter the element."<<endl;
        cin>>pos;
        between(arr,n,pos);
        break;

}
for(i=0;i<sizee(arr);i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}
