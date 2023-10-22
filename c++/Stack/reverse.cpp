#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>st;
stack<int>rt;
stack<int>st_new;
st.push(10);
st.push(20);
st.push(40);
while(st.size()!=0)
{
    cout<<st.top()<<" ";
rt.push(st.top());
st.pop();
}
cout<<endl;
while(rt.size()>0)
{
    st_new.push(rt.top());
    rt.pop();
}
while(st_new.size()>0)
{
    st.push(st_new.top());
    st_new.pop();
}
while(st.size()>0)
{
    cout<<st.top()<<" ";
    st.pop();
}
}