#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void subset(vector<vector<int>>&v1,vector<int>&v,vector<int> &v2,int i)
{
    if(v.size()==i){
     for(int i=0;i<v2.size();i++)
     cout<<v2[i]<<" ";
     cout<<endl;
    return;
    }    
     v2.push_back(v[i]);
    subset(v1,v,v2,i+1);
    v2.pop_back();
    subset(v1,v,v2,i+1);
   
}
int main()
{  
vector<int>v;
v.push_back(1);
v.push_back(2);
// v.push_back(3);
vector<vector<int>>v1;
vector<int>v2;
subset(v1,v,v2,0);



}