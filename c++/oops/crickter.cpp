#include<iostream>
using namespace std;
class crickter{
    public:
int age;
int noOfTestMatches;
char name;
int averagescore;
};
int main()
{
    crickter virat;
    virat.name='v';
    virat.age=30;
    virat.noOfTestMatches=100;
    virat.averagescore=80;

    crickter dhoni;
    dhoni.name='d';
    dhoni.age=40;
    dhoni.noOfTestMatches=300;
    dhoni.averagescore=56;
crickter crickters[2]={virat,dhoni};
for(int i=0;i<2;i++)
{
cout<<crickters[i].averagescore<<endl;
}

}