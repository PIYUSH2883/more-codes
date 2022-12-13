#include<iostream>
using namespace std;
class rectangle
{

private:
int length,bridth;
public:
rectangle():length(0),bridth(0)
{}

rectangle(int x,int y):length(x),bridth(y)
{

}
rectangle(int x):length(x),bridth(x)
{}
void area()
{
   cout<<length*bridth<<endl;
}

};
int main()
{
    rectangle r1(2,5);
    rectangle r2;
    rectangle r3(10);
    r1.area();
    r2.area();
    r3.area();
        return 0;
}