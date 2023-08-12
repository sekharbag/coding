
#include<iostream>
using namespace std;
class Bike{
    public:
    static int noofbikes;
    int tyresize;
    int enginesize;
    //default constructor
    //values initialize
    Bike(int tS,int eS):tyresize(tS),enginesize(eS){};

    static void bikenumberincrease(){
        noofbikes++;
    }
    //static function 
    //satic function can only have static variable
    
  

};
int Bike::noofbikes=10;
void print()
{
    static int b=10;
    cout<<b<<endl;
    b++;
}
int main()
{
   Bike tvs(12,150);
//     //object created 
//     //memeory allocation
//     //compiler calles constructor
     Bike honda(13,230);
    honda.bikenumberincrease();
    tvs.bikenumberincrease();
    Bike::bikenumberincrease();
    cout<<"Honda: "<< honda.tyresize<<" "<<honda.noofbikes<<" "<<honda.enginesize<<endl;
  cout<<"TVS: "<< tvs.tyresize<<" "<<tvs.noofbikes<<" "<<tvs.enginesize<<endl;


print();
print();
print();


}