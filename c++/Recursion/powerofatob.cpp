#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int power=1;
    if(b==0) return 1;
    if(b<0) return (1/(a/pow(a,b+1)));
    else {
    power=a*pow(a,b-1);
    return power;
    }
}
int main()
{
cout<<pow(4,-2);
}