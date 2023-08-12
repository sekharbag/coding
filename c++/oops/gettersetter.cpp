#include<iostream>
#include<string>
using namespace std;
class player{
    private:
    int score;//data members
    int health;
    public:
    //setter
    void score_func(int s)
    {
        score=s;
    }
    void health_func(int h)
    {
        health=h;
    }
    //getter
    int  getscore()
    {
return score ;
}
    int gethealth(){
        return health;
    }
};
int main()
{
    player amit;
    amit.health_func(100);
    amit.score_func(50);
    cout<<amit.gethealth()<<endl;
    cout<<amit.getscore();
    
    }