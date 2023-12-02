#include<iostream>
#include<vector>
#include<stack>
using namespace std;
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
string str="7+9-4/8+3";
stack<int>val;
stack<char>op;
for(int i=0;i<str.length();i++)
{
    if(str[i]!='*' && str[i] !='+' && str[i]!='/' && str[i]!='-'){
    val.push(str[i]-48);
    }
    else
    { 
       if(op.size()==0)
        op.push(str[i]);
        else if(priority(op.top())<priority(str[i]))
             op.push(str[i]);
        else 
        {
        while(op.size()>0 && priority(op.top())>=priority(str[i]))
          {
            char ch=op.top();
            op.pop();
            int a=val.top();
            val.pop();
            int b=val.top();
            val.pop();
            if(ch=='*')
              val.push(b*a);
            else  if(ch=='+')
              val.push(b+a);
             else if(ch=='/')
              val.push(b/a);
            else   if(ch=='-')
              val.push(b-a);

          }
          op.push(str[i]);
        }
    }
}
if(op.size()==1 && val.size()==2)
{
           char ch=op.top();
            op.pop();
            int a=val.top();
            val.pop();
            int b=val.top();
            val.pop();
            if(ch=='*')
              val.push(b*a);
            else  if(ch=='+')
              val.push(b+a);
             else if(ch=='/')
              val.push(b/a);
            else   if(ch=='-')
              val.push(b-a);
}
cout<<val.top()<<" ";
cout<<7+9-4/8+3<<endl;
}