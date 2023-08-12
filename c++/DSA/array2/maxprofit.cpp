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
int max_profit=0;
vector<int>maxreturn;
for(int i=0;i<v.size();i++)
{
    for(int j=i+1;j<v.size();j++){
max_profit=v[j]-v[i];
if(max_profit>0)
maxreturn.push_back(max_profit);
    }
}
for (int  i = 0; i < maxreturn.size(); i++)
{
    cout<<maxreturn[i]<<" ";
}
cout<<endl;
int max=maxreturn[0];
for(int i=1;i<maxreturn.size();i++)
{
  if(max<maxreturn[i] )
   max=maxreturn[i];
}
cout<<max<<endl;

}
