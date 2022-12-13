#include<iostream>
using namespace std;
class AddAmount
{

private:
int amount=50;
public:
AddAmount(int x)
{
    amount += x;
}
AddAmount()
{
    amount =50;
}
void display()
{
    cout<<amount;
}

};
int main()
{
    AddAmount a1(80);
    a1.display();
    return 0;
}