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
int i=0;
int j=v.size()-1;
while(i<j)
{
swap(v[i],v[j]);
i++;
j--;
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}
}
