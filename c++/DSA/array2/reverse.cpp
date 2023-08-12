#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;
int n;
cout<<"enter size";
cin>>n;
cout<<"enter your values";
for (int  i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
vector<int>v2(v.size());
for(int i=0;i<v.size();i++)
{
 v2[v2.size()-i-1]=v[i];
}

for (int  i = 0; i < v2.size(); i++)
{
    cout<<v2[i]<<" ";
}
}
