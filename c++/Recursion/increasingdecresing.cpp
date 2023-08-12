#include<iostream>
using namespace std;
void  increasingdecreasing(int n,int a)
{

    if(a>n) return ;
    cout<<a<<endl;
    increasingdecreasing(n,a+1);
    if(n!=a)
    cout<<a<<endl;

}
int main()
{
increasingdecreasing(5,1);
}