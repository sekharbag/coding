#include<iostream>
using namespace std;
bool  powof2(int a)
{
    if(a==1) return 1;
    else if(a%2==0) powof2(a/2);
    else return 0;
}
int main()
{
cout<<powof2(129);
}