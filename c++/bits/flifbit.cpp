#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int all1(int n)
{
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return n;
}
int main()
{
int a=all1(8);
cout<<(a^8);
}
