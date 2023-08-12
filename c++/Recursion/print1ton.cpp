#include<iostream>
using namespace std;
void print1ton(int n,int m)
{
    if(m>n) return ;
    cout<<m<<endl;
    print1ton(n,m+1);
}
int main()
{
print1ton(5,1);
}