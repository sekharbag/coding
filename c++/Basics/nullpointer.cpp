#include<iostream>
using namespace std;
int main(){
// int *ptr= 0;
// cout<<ptr;
// NULL,0,'\0' all give 0 as address
//double pointer to store the address of a pointer
int x=5;
int *ptr=&x;
int **p=&ptr;
cout<<&x<<endl;
cout<<ptr<<endl;
cout<<p;


     }