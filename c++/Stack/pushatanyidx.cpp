#include<iostream>
#include<stack>
using namespace std;
void pushatanyidx(stack<int> &v,int idx,int val)
{
stack<int>helper;
while(v.size()>0)
{
    helper.push(v.top());
    v.pop();
}
int count=1;
while(helper.size()>0)
{
if(count==idx)
v.push(val);
v.push(helper.top());
helper.pop();
count++;
}
}
int main()
{
stack<int>st;
st.push(10);
st.push(20);
st.push(40);
pushatanyidx(st,2,120);
while(st.size()>0)
{
cout<<st.top()<<" ";
st.pop();
}
}