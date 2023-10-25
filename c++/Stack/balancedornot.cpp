#include<iostream>
#include<string>
#include<stack>
using namespace std;
string isBalanced(string s) {
   if(s.length()%2!=0) return  "NO";
       int count=0;
    stack<char>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{'|| s[i]=='(' || s[i]=='['){
        v.push(s[i]);
        count++;
        }
        else if( s[i]==')' &&v.size()!=0){
         if( v.top()=='(')
        v.pop();
         else
        break;
        }
       else if( s[i]==')' &&v.size()==0) return "NO";
         else if( s[i]=='}' &&v.size()!=0){
         if( v.top()=='{')
        v.pop();
        else
        break;
         }
     else if( s[i]=='}' &&v.size()==0)
         return "NO";
          else if(v.size()!=0 && s[i]==']' ){
         if( v.top()=='[')
        v.pop();
         else
        break;
          }
          else if( s[i]==']' &&v.size()==0)
          return "NO";
    }
    if(v.size()==0 && count>0)
    return "YES";
    return "NO";
}
int main()
{
string str;
cout<<"enter string";
cin>>str;
cout<<isBalanced(str);
}