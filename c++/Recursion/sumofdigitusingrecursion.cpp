#include<iostream>
using namespace std;
int sod(int n)
{
static int ans =0;
 if(n==0) return ans ;
 ans =ans*10+(n%10);
 return sod(n/10); 
}
int main()

{
cout<<sod(451);
}