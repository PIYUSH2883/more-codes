#include<iostream>
using namespace std;
class student
{

private:
string name;
public:
student(string x)
{
    name=x;
    cout<<name<<endl;
}
student()
{    name="unknown";
    cout<<name;
}

};
int main()
{
    // student s1("piyush jain");
    student s2;
    return 0;
}