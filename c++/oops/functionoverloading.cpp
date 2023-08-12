#include<iostream>
#include<string>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    int handlesize;
    string companyname;
    int lights;
    //default constructor
    //values initialize
    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"const1 is clled"<<endl;
    }
    //constructor overloading 
    Bike(int tyresize){
        this->tyresize=tyresize;
        this->enginesize=200;
        cout<<"const2 is clled"<<endl;
    }
        //constructor overloading 
 Bike(){
        this->tyresize=12;
        this->enginesize=200;
        cout<<"const3 is clled"<<endl;
    }
};
void add(int a,int b)
{
 cout<<a +b;
}
void add(int a)
{
cout<<a;
}
//having two functions of same name but with differnt parameters is called function overloading
int main()
{
    //add(1,2);
    //add(2);
    Bike tvs(12,150);
    //object created 
    //memeory allocation
    //compiler calles constructor
    Bike honda(13);
    Bike RE;
   cout<<endl;
   cout<<"TVS: "<< tvs.tyresize<<" "<<tvs.enginesize<<endl;
   cout<<"Honda: "<< honda.tyresize<<" "<<honda.enginesize<<endl;
      cout<<"RE: "<< RE.tyresize<<" "<<RE.enginesize<<endl;

}