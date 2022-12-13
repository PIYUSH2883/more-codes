#include<iostream>
using namespace std;
class programming
{

    private:
    string s;
    public:
    programming()
    {
        cout<<"I love programming ";
    }
    programming(string x)
    {
        s=x;
        cout<<"I love "<<s<<endl;

    }
};
int main()
{
    programming p("c++");
    programming p2;
    return 0;

}