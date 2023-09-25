#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
int a=789;
int count=0;
//for every iteration find a-1 and use and operator btw them as a-1 will be fliffed from the last set bit 
// so after every iteration we will loose one bit 
//and fianlly it will become 0 
//count no of iterations 
while(a!=0)
{
a=(a&a-1);
count++;
}
cout<<__builtin_popcount(789)<<endl;
cout<<count<<endl;
}
