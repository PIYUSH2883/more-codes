#include<iostream>
using namespace std;
class copy1
{

private:
int a,b;
public:
copy1(int x,int y)
:a{x},b{y}
{
   cout<<"constructor called !"<<endl;
}
copy1(const copy1 &source)
{
    cout<<"copy constructor called"<<endl;

}

void display(copy1 c)

{
cout<<c.a<<"  "<<c.b;
}
};
int main()
{
    copy1 c1(2,5);
    // cout<<c1.a<<"  "<<c1.b;
    display(c1);
    copy1 c2(c1);
    // cout<<c2.a<<"  "<<c2.b;
    display(c2);
    return 0;
}
