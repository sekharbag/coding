#include<iostream>
using namespace std;
 int  fact(int n)
{
    if(n==0) return 1;
   return  n*fact(n-1);
     
}

int main(){
  cout<<"hello"<<endl;
  cout<<fact(6);
}