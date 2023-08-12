#include<iostream>
#include<string>
using namespace std;
class vechile{
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname;
    void showcompanyname(){
        cout<<companyname;
    }
    void setcomapnyname(string companyname){
         this->companyname=companyname;
    }

};

class car:public vechile{
    public:
    int steeringsize;
};
//car is a child of vechile
//vechile parent class ; car,bike is derived class;
class Bike:public vechile{
    public:
    int handlesize;
 
};
class A{
    public://can be accessed can be inherited 
    int a_ka_public;
    private:// cant be accessed by inheritance 
    int a_ka_private;
    protected://cant be accessed but can be inheritaed 
    int a_ka_protected;
    A(){
        cout<<"a ka constructor"<<endl;
    }
};
class B:public  A{//b_ka_public-->public // a_ka_public,a_ka_protaced as protacted if b is private 
    public:
    int b_ka_public;
    void show()
    {
       a_ka_protected=10;
       cout<<a_ka_protected;
    }
      B(){
        cout<<"b ka constructor"<<endl;
    }

};
class C:public B{ //c_ka_public as pu// a_ka_public ,a_ka_proacted  as protacted ,b_ka_public  as public 
    public:
    int c_ka_public;
     C(){
        cout<<"c ka constructor"<<endl;
    }

};


int main()
{
// Bike honda;
//  honda.handlesize=10;
//  honda.tyresize=12;
// honda.setcomapnyname("HONDA");
// // though bike didnt have the setter func for company still it has cause its parent class has that as member func 
// //so being child class bike also has that 
// honda.showcompanyname();

C c ;

// as c is the derived class of A and B so while making object for c constructor of A and B is also called




}