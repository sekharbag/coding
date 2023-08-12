#include<iostream>
using namespace std;
int  sum1_ton(int n,int a)
{
    int sum=0;
    if(a>n) return 0;
    sum=a+sum1_ton(n,a+1);
    return sum;
}
int main()
{
cout<<sum1_ton(10,0);
}