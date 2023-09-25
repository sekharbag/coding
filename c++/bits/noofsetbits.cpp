#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
// cout<<__builtin_popcount(13);
int a=18;
int count=0;
while(a>0)
{
    if(a%2==0)
    {
      a=a>>1;
    continue;
    }
    else
    count++;
    a=a>>1;
}
cout<<__builtin_popcount(18)<<endl;
cout<<count<<endl;
}
