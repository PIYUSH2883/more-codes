#include<iostream>
using namespace std;
class player
{



public:
string name;
int health;
int xp;
player(string name="none",int health=0,int xp=0);
player(const player &source);
~player()
{
    cout<<"destructor called"<<endl;
}
char get_name()
{
    return name;
}
int get_health()
{
    return health;

}
int get_xp()
{
    return xp;
}
  
};
player::player(string name_val,int health_val,int xp_val)
  :name{name_val},health{health_val},xp{xp_val}
  {
    cout<<"Three args constructor "<<endl;
  }
 player::player(const player &source)
  :name{source.name},health {source.health},xp{source.xp}
  {
    cout<<"copy constructor called"<<endl;
  }

  void display_player(player p)
  {
    cout<<"Name "<<p.get_name<<endl;
    cout<<"health"<<p.get_health<<endl;
    cout<<"XP"<<p.get_xp<<endl;
      }
  
 int main()
 {
    player empty;
    player pj("Piyush",18,30);
    display_player(pj);
    player hero("hero",80);
    player p1(hero);
    return 0;
 }
