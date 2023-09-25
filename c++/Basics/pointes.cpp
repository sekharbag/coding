#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(int);
    // // 4 is in bytes that is 32 bits
    int x=4;
    int *y=&x;
    *y=*y+1;
    cout<<&x<<endl;
    cout<<*y<<" "<<x<<endl;
    int *m=new int (5);
    cout<<m;
}