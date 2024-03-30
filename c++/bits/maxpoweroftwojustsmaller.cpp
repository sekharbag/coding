#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int maxpowerof2(int n)
{
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;
}
int main()
{
int a=65;
int x=0;
int count=0;
while(a!=0)
{
x=a;
a=(a&a-1);
count++;
}

cout<<x;
cout<<endl;
 a=65;
cout<<maxpowerof2(a);
}
