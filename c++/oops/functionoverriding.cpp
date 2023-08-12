#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a_ka_public;
    // once virtual is defined for a parent then for all derived classes function is virtual
   virtual  void show(){
    cout<<"i am a ka show"<<endl;
   }
};
class B:public  A{
    public:
    int b_ka_public;
void show(){
    cout<<"i am b ka show"<<endl;
   }
  

};
class C:public B{
    void show(){
        A::show();
        B::show();
    }
}
;

int main()
{
A a;
B b;
// to call show from A through B use of scopr resolution operator
b.show();
//compiler pov-->ptr is of A type so A should be called 
//runtime pov-->ptr stores b's address so b should be called 

A*ptr;
ptr=&b;
ptr->a_ka_public=10;
ptr->show();
}