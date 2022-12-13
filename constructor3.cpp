#include<iostream>
using namespace std;
class rectangle
{
    private:
    int s1,s2,area;
    public:
    void set_area()
    {
    area=s1*s2;
    }
    void display()
    {
        cout<<"The area is: "<<area;
    }
    rectangle(int x,int y)
    {
        s1=x;
        s2=y;
    }
};
int main()
{
    rectangle r1(2,3);
    r1.set_area();
    r1.display();
    return 0;
}
