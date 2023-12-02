#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    v.push_back(2);
    v.push_back(7);
    vector<int>nge(v.size(),-1);
    stack<int>st;
    st.push(v[v.size()-1]);
    for(int i=v.size()-2;i>=0;i--)
    {
     while(st.size()>0 && v[i]>=st.top()) st.pop();
     if(st.size() == 0){ 
     nge[i]=-1;
     st.push(v[i]);
     }
     else{
     nge[i]=st.top();
     st.push(v[i]);
     }
    }
for(int i=0;i<nge.size();i++)
cout<<nge[i]<<" ";

}