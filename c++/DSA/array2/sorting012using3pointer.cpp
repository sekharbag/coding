
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
int low=0;
int mid=0;
int hi=v.size()-1;
while(mid<=hi)
{
    if(v[mid]==2)
    {
        swap(v[mid],v[hi]);
        hi--;
    }
    if(v[mid]==0)
    {
          swap(v[mid],v[low]);
          low++;
          mid++;
    }
    if(v[mid]==1)
    {
        mid++;
    }
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

}

