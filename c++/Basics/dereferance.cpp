#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(int);
    // // 4 is in bytes that is 32 bits
    int x=4;
    // int *p=&x;//p pointer variable
    // cout<<p<<endl;
    // *p=6;
    // cout<<x<<endl;
    //  cout<<*p;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
     }