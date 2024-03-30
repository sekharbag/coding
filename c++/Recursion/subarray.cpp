#include<iostream>
#include<vector>
#include<string.h>
#include <typeinfo>
using namespace std;
void subset(vector<vector<int>>&v1,vector<int>&v,vector<int> &v2,int i)
{
    if(v.size()==i){
     for(int i=0;i<v2.size();i++)
     cout<<v2[i]<<" ";
     cout<<endl;
    return;
    }  
    subset(v1,v,v2,i+1);  
    if(v2.size()==0){
     v2.push_back(v[i]);
    subset(v1,v,v2,i+1);
      v2.pop_back();
    }
     if(v[i-1]==v2[v2.size()-1])
    {
     v2.push_back(v[i]);
    subset(v1,v,v2,i+1);
    v2.pop_back();
    }
   
}
int main()
{  
vector<int>v;
v.push_back(1);
 v.push_back(2);
// v.push_back(4);
// v.push_back(3);
// v.push_back(4);

vector<vector<int>>v1;
vector<int>v2;
subset(v1,v,v2,0);
// string str=typeid(""). name();
// if(str=="i")
// cout<<typeid(-2). name();

}