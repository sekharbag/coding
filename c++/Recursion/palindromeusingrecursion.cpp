#include<iostream>
#include<vector>
#include<string.h>
#include <typeinfo>
using namespace std;
void reverse(string str,string s,int i)
{
    if(i<0) {
          cout<<s<<endl;
        if(str==s)
        {
        cout<<"yes! palindrome";
        }
        return ;
    }
      s=s+str[i];
     reverse(str,s,i-1);
}
int main()
{  
string str="racecar";
reverse(str,"",str.length()-1);
// cout<<s<<endl;
// if(s==str) 
// else cout<<"not a palindrome";
}