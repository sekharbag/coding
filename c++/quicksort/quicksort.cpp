#include<iostream>
#include<vector>
using namespace std;
int   partition(vector<int> &v,int k,int l)
{
    int pivotele=v[(k+l)/2];

int count=0;
for(int i=k;i<l+1;i++)
{
    if(i!=(k+l)/2){
    if(v[i]<=pivotele)
    {
        count++;
    }
    }
}
int pi=count+k;
swap(v[(k+l)/2],v[pi]);
int i=k;
int j=l;

while(i<pi&&j>pi)
{
    if(v[i]<=v[pi])
    i++;
    else if(v[j]>v[pi])
    j--;
    else if(v[i]>v[pi]&&v[j]<=v[pi])
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
return pi;
}
void quicksort( vector<int>&v,int si,int ei)
{
    if(si>=ei)
    return;
int pi=partition(v,si,ei);
quicksort(v,si,pi-1);
quicksort(v,pi+1,ei);

}
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);
    v.push_back(4);
    quicksort(v,0,v.size()-1);
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
}


