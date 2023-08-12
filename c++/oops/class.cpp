#include<iostream>
#include<string>
using namespace std;
class player{
    public:
    int score;//data members
    int health;
    void showhealth()//member functions
    {
      cout<<health;
    }
};
int main()
{
    player amit;
    amit.health=100;
    amit.score=10;    
    amit.showhealth();
  
    }