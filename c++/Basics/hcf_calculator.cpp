#include<iostream>
using namespace std;
int hcf(int n,int m){
int fact=1;
   for(int i=2;i<=min(m,n);i++){
    if(m%i==0 && n%i==0){
        fact=i;
    }
   }
   return fact;
}
int hcf_modified(int n,int m){
int fact=1;
   for(int i=min(m,n);i>=1;i--){
    if(m%i==0 && n%i==0){
        fact=i;
   return fact;

    }
   }
}
int main(){
   int n,m;
   cout<<"entr n";
   cin>>n;
   cout<<"entr m";
   cin>>m;
   int actual_hcf=hcf(n,m);
   cout<<actual_hcf<<endl;
   int modified_hcf=hcf_modified(n,m);
cout<<modified_hcf<<endl;
   
}