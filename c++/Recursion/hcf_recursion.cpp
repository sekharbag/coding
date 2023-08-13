#include<iostream>
using namespace std;
int hcf(int n,int m){
int rem=1;
rem=n%m;
if(rem==0) return m ;
return hcf(m,rem);
   }
// EUCLIDS ALGO
int main(){
   int n,m;
   cout<<"entr n";
   cin>>n;
   cout<<"entr m";
   cin>>m;
   cout<<hcf( n, m);
   
}