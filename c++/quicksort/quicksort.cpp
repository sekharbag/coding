#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int pivot_idx,int k,int l)
{
int count=0;
for(int i=0;i<v.size();i++)
{
    if(v[i]<v[pivot_idx])
    {
        count++;
    }
}
swap(v[pivot_idx],v[count]);
pivot_idx=count;

while(k<l)
{
    if(v[k]<v[pivot_idx])
    k++;
    else if(v[l]>v[pivot_idx])
    l--;
    else if(v[k]>v[pivot_idx]&&v[l]<v[pivot_idx])
    {
        swap(v[k],v[l]);
        k++;
        l--;
    }
}
return pivot_idx;
}
void quick_sort(vector<int>&v,int pivot_idx)
{
partition(v,pivot_idx,0,pivot_idx-1);
partition(v,pivot_idx,pivot_idx+1,v.size()-1);
}
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(2);
    v.push_back(6);
    v.push_back(6);
      v.push_back(7);
    int i=0;
     int j=v.size()-1;
     partition(v,0,i,j);
    quick_sort(v,partition(v,0,i,j) );
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
}


