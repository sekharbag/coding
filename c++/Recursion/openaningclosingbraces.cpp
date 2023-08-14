#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void generatebraces(string str,int o,int c,int n)
{
    if(o>n)
    return;
    else if(o==n&&c==n)
    {
       cout<<str;
        cout<<endl;
        return;
    }
      str=str+"(";
     generatebraces(str,o+1,c,n);
     str.pop_back();
    if(c+1<=o)
    {
     str=str+")";
      generatebraces(str,o,c+1,n);
    }
 
    
}
int main()
{
vector<int>nums;
generatebraces("",0,0,3);
}