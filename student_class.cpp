#include<iostream>
#include<string.h>
using namespace std;
class student
{

private:
char name[20];
int roll_no,age;
public:
 //student(string name="none",int roll_no=000,int age=0);
void input()
{
    cout<<"Enter the name of the student :";
    gets(name);
    cout<<endl<<"Enter the roll_no of the student :";
    cin>>roll_no;
    cout<<"Enter the age of the student :";
    cin>>age;

}
void display()
{
    cout<<"Name :"<<name<<endl;
    cout<<"roll_no :"<<roll_no<<endl;
    cout<<"age :"<<age;

}


};
int main()
{
   // student piyush("Piyush Jain ",022,19);
   student piyush;
    piyush.input();
    piyush.display();
    return 0;
}
