#include<iostream>
using namespace std;
int  pow(int a,int b)
{
   if(b==1) return a;
   int a1=pow(a,b/2);
   if(b%2!=0) return a1*a1*a;
   else return (a1*a1);
   
}
int main()
{
cout<<pow(3,3);
}