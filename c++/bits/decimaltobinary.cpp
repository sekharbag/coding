#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
   int a=16;
  string  str="";

  while(a>0)
  {
    if(a%2==0)
    str="0"+str;
    else str="1"+str;
    a=a>>1;
  }
  cout<<str;

}
