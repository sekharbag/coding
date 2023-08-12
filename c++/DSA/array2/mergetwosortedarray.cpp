
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
vector<int>v1;
int n1;
cout<<"enter size";
cin>>n1;
cout<<endl;
cout<<"enter your values";
for (int  i = 0; i < n1; i++)
{
    int x1;
    cin>>x1;
    v1.push_back(x1);
}
for (int  i = 0; i < n1; i++)
{
    cout<<v1[i]<<" ";
}
cout<<endl;
vector<int>v3(v.size()+v1.size());
int i=0;
int j=0;
int k=0;
while(i<v.size()&&j<v1.size())
{
  if(v[i]<=v1[j])
  {
    v3[k]=v[i];
    i++;
    cout<<i<<endl;
    
  }
  else
  {
  v3[k]=v1[j];
  j++;
  cout<<j<<endl;
 
  }
  k++;
}
//for remaining elements 
if(v.size()==v1.size())
{
    while(min(i,j)<v1.size())
    {
       
        if(i<=j){
        v3[k]=v[i];
        i++;
        }
        else8
        {
      v3[k]=v1[j];
      j++;
        }
       
        k++;
    }

}
if(v.size()>v1.size())
{
    while(i<v.size())
    {
        v3[k]=v[i];
        i++;
        k++;
    }
}

if(v.size()<v1.size())
{
    while(j<v1.size())
    {
        v3[k]=v1[j];
        j++;
        k++;
    }
}
for (int  i = 0; i < v3.size(); i++)
{
    cout<<v3[i]<<" ";
}
}

