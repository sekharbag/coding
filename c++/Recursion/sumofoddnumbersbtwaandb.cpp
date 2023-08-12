#include<iostream>
using namespace std;
int  sum_a_to_b(int a,int b)
{
    if(a>b) return 0;
    if(a%2==0) return sum_a_to_b(a+1,b);
     else  return sum_a_to_b(a+2,b)+a;

}
int main()
{
cout<<sum_a_to_b(4,9);
}