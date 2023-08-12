#include<iostream>
#include<vector>
#include<string.h>
#include<climits>
using namespace std;
int  min_ele(vector<int>&v,int i,int min)
{

  if(i==v.size())
  {
    return min;
  }
cout<<min<<endl;
  if(v[i]<min)
  {
    min=v[i];
  }

  min_ele(v,i+1,min);
   
}
int main()
{  
vector<int>v;
v.push_back(2);
v.push_back(1);
v.push_back(3);
int i=INT_MAX;
cout<<min_ele(v,0,INT_MAX);



}