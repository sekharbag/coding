#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

 for(int ele:v) // for each loop
 {
    cout<<ele<<" ";
 }
    cout<<endl;
for(int i=0;i<v.size()-1;i++)
{
    int min=v[i];
    int idx=i;
    for(int j=i+1;j<v.size();j++)
    {
        if(v[j]<min)
        {
        min=v[j];
        idx=j;
        }
    }
    swap(v[idx],v[i]);
}
 cout<<endl;
for(int ele:v)
 {
    cout<<ele<<" ";
 }
}
