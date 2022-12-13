#include<iostream>
#include<cmath>
using namespace std;

class triangle
{
private:
    int s1,s2,s3,parameter;
    double s ,area ;
public:
triangle(int x,int y,int z)
{
    s1=x;
    s2=y;
    s3=z;
}
    // void set_side()
    // {
    //     cout<<"Enter the side s1 :"<<endl;
    //     cin>>s1;
    //     cout<<"enter the side s2 :"<<endl;
    //     cin>>s2;
    //     cout<<"enter the side s3 :"<<endl;
    //     cin>>s3;
    // }
    void set_parameter()
    {
        parameter=s1+s2+s3;

    }
    void set_semi_p()
    {
      s=(s1+s2+s3)/2;

    }

    void set_area()
    {
    //    double area1=;
        area= sqrt((s*(s-s1)*(s-s2)*(s-s3)));
    }
    void display()
    {
        cout<<"the parameter of the given triangle is :"<<parameter<<endl;
        cout<<"The area of the given triangle is :"<<area<<endl;
    }

};

int main()
{
triangle t1(3,9,8);
// t1.set_side();
t1.set_parameter();
t1.set_semi_p();
t1.set_area();
t1.display();

return 0;
}
