#include<iostream>
using namespace std;
class Gun{
public:
int damage;
int ammo;
int scope;
};
class player{
private:
class Helmet{
    int level;
    int hp;
    public:
int gethp(){
return hp;
}
int getlevel(){
return level;
}
void setlevel(int level)
{
    this->level=level;
}
void sethp(int hp)
{
   this->hp=hp;
}
};
int health;
int age;
int score;
bool alive;
Gun gun;
Helmet helmet;
public:



void sethelmet(int level)
{
Helmet *helmet=new Helmet;
helmet->setlevel(level);
if(level==1)
helmet->sethp(25);
else if(level==2)
helmet->sethp(50);
else
helmet->sethp(100);
this->helmet=*helmet;
}

void gethelmet(){
cout<<"hp is :"<<helmet.gethp()<<endl;
cout<<helmet.getlevel()<<endl;
}




int gethealth(){
    return health;
}
int getage(){
    return age;
}
int getscore(){
    return score;
}
int isalive(){
    return alive;
}

 Gun getgun(){
    return gun;
}
void sethealth(int health1)
{
    this->health=health1;
}
void setscore(int score1)
{
    this->score=score1;
}
void setage(int age1)
{
    this->age=age1;
}
void setislive(int alive1)
{
    this->alive=alive1;
}
void setgun(Gun gun)
{
    this->gun=gun;
}
};
int addscore(player a,player b)
{
    return a.getscore()+b.getscore();
}
player getmaxscore(player a ,player b){
    if(a.getscore()>b.getscore())
    return a;
    else 
    return b;

}
int main()
{

   
  
    Gun akm;
    akm.ammo=40;
    akm.damage=56;
    akm.scope=4;

    player harsh;//compile time allocation 
    harsh.sethealth(100);
    harsh.setage(15);
    harsh.setscore(120);
    harsh.setislive(1);
    harsh.setgun(akm);
    harsh.sethelmet(2);

    //cout<<harsh.getgun().ammo<<endl;



    player my_new; //compile time allocation 
    my_new.sethealth(90);
    my_new.setage(16);
    my_new.setscore(20);
    my_new.setislive(1);
    my_new.sethelmet(1);

player *urvi= new player; //dynamic memory
player urviobj=*urvi;
urviobj.setage(20);
urviobj.sethealth(20);
urviobj.setislive(0);
urviobj.setscore(100);




(*urvi).setage(45);
cout<<(*urvi).getage()<<endl;



urvi->setage(40);//-> operatpr basically gives the object out of a poinetr 
cout<<urvi->getage()<<endl;



player harish=getmaxscore(harsh,my_new);
cout<<harish.getage()<<endl;
cout<<addscore(harsh,my_new)<<endl;



harsh.gethelmet();
cout<<endl;



player player[3]={harish,harsh,*urvi};
cout<<player[0].getage();
    }