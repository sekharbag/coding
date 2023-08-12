#include<iostream>
#include<vector>
#include<string.h>
#include<climits>
using namespace std;
int  sum(vector<int>&v,int i,int sum_ele)
{

  if(i==v.size())
  {
    return sum_ele;
  }
  sum_ele=sum_ele+v[i]; 
  return sum(v,i+1,sum_ele);
}
int main()
{  
vector<int>v;
v.push_back(4);
v.push_back(-1);
v.push_back(10);
cout<<sum(v,0,0);



}