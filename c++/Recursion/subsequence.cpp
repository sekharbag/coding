#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void subset(vector<vector<int>>&v1,vector<int>&v,vector<int> &v2,int i,int k)
{
    if(v.size()==i){
        if(v2.size()==k)
        {
     for(int i=0;i<v2.size();i++)
     cout<<v2[i]<<" ";
     cout<<endl;
        }
    return;
    }    
    if(v2.size()+v.size()-i<k) return;
     v2.push_back(v[i]);
    subset(v1,v,v2,i+1,k);
    v2.pop_back();
    subset(v1,v,v2,i+1,k);
   
}
int main()
{  
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

vector<vector<int>>v1;
vector<int>v2;
subset(v1,v,v2,0,3);



}