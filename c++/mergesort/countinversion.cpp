#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&v)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
        {
            v[k]=a[i];
            i++;
        }
        else 
        {
            v[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==a.size())
    {
        while(j<b.size()){
             v[k]=b[j];
            j++;
            k++;
        }
    }
     if(j==b.size())
    {
        while(i<a.size()){
             v[k]=a[i];
            i++;
            k++;
        }
    }
}
void mergesort(vector<int>&v)
{
int n=v.size();
if(n==1)
return;
int n1=n/2;
int n2=n-(n/2);
vector<int>a(n1);
vector<int>b(n2);
int count=0;
for(int i=0;i<a.size();i++)
{
   a[i]=v[i]; 
   count++;

}
for(int i=0;i<b.size();i++)
{
   b[i]=v[count]; 
   count++;
}
mergesort(a);
mergesort(b);
merge(a,b,v);
a.clear();
b.clear();
}
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    mergesort(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
}