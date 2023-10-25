#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int v[]={68 ,735 , 101 ,770 ,525 ,279 , 559 ,563 ,465 , 106 ,146};
    int n = sizeof(v) / sizeof(v[0]);
 vector<int>nge(n,1);
    stack<int>st;
    st.push(0);
    bool flag;
    for(int i=1;i<n;i++)
    {
        flag=false;
     while(st.size()>0  && v[st.top()]<=v[i]) {
         flag=true;
         st.pop();
     }
     if(st.size()==0)
        nge[i]=i+1;
     else if(flag==false)  nge[i]=1;
     else
        nge[i]=i-st.top();
        st.push(i);
    }
    for(int i=0;i<nge.size();i++)
cout<<nge[i]<<" ";

}