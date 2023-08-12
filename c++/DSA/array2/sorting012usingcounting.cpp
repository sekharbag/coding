
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
int noz=0;
int noo=0;
int noti=0;
for(int i=0;i<v.size();i++)
{
    if(v[i]==0)
    noz++;
    if(v[i]==1)
    noo++;
     if(v[i]==2)
    noti++;
}
cout<<noz<<" "<<noo<<" "<<noti;
cout<<endl;
for(int i=0;i<noz;i++)
{
    v[i]=0;

}
for(int i=noz;i<v.size()-noti;i++)
{
    v[i]=1;
    
}

for(int i=v.size()-noti;i<v.size();i++)
{
    v[i]=2;
    
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

}

