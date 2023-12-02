#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
// computer readable code 
int  priority(char ch)
{
    int pr;
    if(ch=='*' || ch=='/')
    pr=2;
    else
    pr=1;
    return pr;
}
int main()
{
string str="2+6*4/8-3";
stack<string>val;
stack<char>op;
for(int i=0;i<str.length();i++)
{
    if(str[i]!='*' && str[i] !='+' && str[i]!='/' && str[i]!='-'){
      val.push(to_string(str[i]-48));
    }
    else
    { 
       if(op.size()==0)
        op.push(str[i]);
        else if(priority(op.top())<priority(str[i])){
             op.push(str[i]);
        }
        else 
        {
        while(op.size()>0 && priority(op.top())>=priority(str[i]))
          {
            char ch=op.top();
            op.pop();
            string a=val.top();
            val.pop();
            string b=val.top();
            val.pop();
            string ans =ch+b+a;
            val.push(ans);
          }
          op.push(str[i]);
        }
    }
}
if(op.size()!=0)
{
     while(op.size()!=0)
     {
            char ch=op.top();
            op.pop();
            string a=val.top();
            val.pop();
            string b=val.top();
            val.pop();
            string ans =ch+b+a;
            val.push(ans);
     }
}
while(val.size()>0)
{
    cout<<val.top();
    val.pop();
}

}