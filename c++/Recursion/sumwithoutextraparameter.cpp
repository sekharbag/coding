#include<iostream>
using namespace std;
int  sum1_ton(int n)
{
    int sum=0;
    if(n==0) return 0;
    return n+sum1_ton(n-1);
   
}
int main()
{
cout<<sum1_ton(10);
}