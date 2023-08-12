#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a_ka_public;
    // once virtual is defined for a parent then for all derived classes function is virtual
    virtual void show(){
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

int main()
{
A a;
B b;
cout<<sizeof(A)<<endl;
cout<<sizeof(B)<<endl;
}