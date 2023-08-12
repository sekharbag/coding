#include<iostream>
using namespace std;
// int ans=0;
int  sod(int n,int *ans)
{
    // static int ans=0;
 if(n==0) return *ans;
 *ans=*ans*10+(n%10);
 sod(n/10,ans);
}
int main()
{    int ans=0;
    cout<<sod(1980, &ans)<<endl;
    cout<<&ans;
}