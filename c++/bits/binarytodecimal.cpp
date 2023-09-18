#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
int a=18;
string str="";
while(a>0)
{
    if(a%2==0)
    str='0'+str;
    else 
    str='1'+str;
    a=a/2;
}
cout<<str;
}
