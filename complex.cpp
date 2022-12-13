#include<iostream>
using namespace std;
class complex
{
    private:
    int real,img;
   
    public:
     complex (int r,int i){
   real=r;
   img=i;
    }
    int getreal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
    void add(complex c1)
    {
        cout<<c1.getreal()+real<<" + i"<<c1.getimg()+img<<endl;

    }
    void difference(complex c2)
    {
        int realdiff,imgdiff;
        realdiff= real-c2.real;
        imgdiff= img-c2.img;
        cout<<realdiff <<" + ("<<imgdiff<<"i)"<<endl;
    }
};

int main()
{
    complex comp1(4,5);
    complex comp2(5,6);
    comp1.add(comp2);
    comp1.difference(comp2);
    
    return 0;
}