#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int> &st ,int val)
{
if(st.size()==0) return;
int x=st.top();
st.pop();
pushatbottom(st,val);
if(st.size()==0) st.push(val);
st.push(x);
}
int main()
{
stack<int>st;
stack<int>helper;
st.push(10);
st.push(20);
st.push(40);
pushatbottom(st,123);
// while(st.size()>0)
// {
//     helper.push(st.top());
//     st.pop();
// }
// st.push(42);
// while(helper.size()>0)
// {
//     st.push(helper.top());
//     helper.pop();
// }
while(st.size()>0)
{
cout<<st.top()<<" ";
st.pop();
}
}