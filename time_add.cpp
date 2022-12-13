#include<iostream>
using namespace std;

class time
{
private:
    int hr,mn,sec;
public:
    void input()
    {
        cout<<"Enter the hours of :"<<endl;
        cin>>hr;
        cout<<"Enter the minutes :"<<endl;
        cin>>mn;
        cout<<"Enter seconds : "<<endl;
        cin>>sec;
    }
    void display()
    {
        cout<<hr<<" hr:"<<mn<<" mn:"<<sec<<" sec"<<endl;
    }
    void sum(time &x,time &y)
    {
        sec=x.sec+y.sec;
        mn=sec/60;
        sec=sec%60;
        mn=mn+x.mn+y.mn;
        hr=mn/60;
        mn=mn%60;
        hr=hr+x.hr+y.hr;
    }
};

int main()
{
time t1,t2,t3;
t1.input();
t2.input();
t3.sum(t1,t2);
t3.display();

return 0;
}
