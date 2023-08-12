#include<iostream>
#include<vector>
#include<string.h>
#include<climits>
using namespace std;
int  sum(vector<int>&v,int i,int idx,int target)
{

  if(i==v.size())
  {
    return idx;
  }
  if(v[i]==target){
  idx=i;
  return idx;
  }
  return sum(v,i+1,idx,target);
}
int main()
{  
vector<int>v;
v.push_back(4);
v.push_back(-1);
v.push_back(10);
cout<<sum(v,0,-1,10);



}