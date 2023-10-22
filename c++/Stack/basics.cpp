#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>st;
stack<int>rt;
// cout<<st.size()<<endl;
st.push(10);
st.push(20);
st.push(40);
// cout<<st.size()<<endl;
// cout<<st.top()<<endl;
while(st.size()!=0)
{
cout<<st.top()<<" ";
rt.push(st.top());
st.pop();
}

}