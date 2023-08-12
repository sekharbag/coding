#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    //default constructor
    //values initialize
    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
     cout<<"constructor called "<<endl;
    }
    ~Bike(){
        cout<<"distructor called"<<endl;
    };

};
int main()
{
    Bike tvs(12,150);
    //object created 
    //memeory allocation
    //compiler calles constructor
    Bike honda(13,230);
    Bike RE(14,350);
   cout<<endl;
   int flag=true;
   if(flag==true)
   {
    Bike bmw(23,1000);
    cout<<"bmw:  "<< bmw.tyresize<<" "<<bmw.enginesize<<endl;
   }
   cout<<"RE:  "<< RE.tyresize<<" "<<RE.enginesize<<endl;
   cout<<"Honda: "<< honda.tyresize<<" "<<honda.enginesize<<endl;
   cout<<"TVS: "<< tvs.tyresize<<" "<<tvs.enginesize<<endl;


}