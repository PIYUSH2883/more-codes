#include<iostream>
using namespace std;
class print
{
private:
int n;
char a[20];
public:

void display(int n,char a[20])
{
    cout<<"The integer is "<<n<<endl;
    cout<<"The charactor is "<<a<<endl;
}
void display(char a[20],int n)

{
    cout<<"The charactor is "<<a<<endl;
    cout<<"The integer is "<<n<<endl;
}

};
int main()
{
    print h;

    h.display("programming skills",5);
    h.display(5,"shhhhhhhh..................");

    return 0;
}