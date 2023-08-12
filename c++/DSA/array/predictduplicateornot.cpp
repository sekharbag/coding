#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
bool duplicate(vector<int>&v)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1])
        return 1;
        else
        continue;
    }
}
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

cout<<duplicate(v);
}

