#include<iostream>
using namespace std;
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=6;
    int b=8;
    swap(&a,&b);
cout<<a<<" "<<b;
     }