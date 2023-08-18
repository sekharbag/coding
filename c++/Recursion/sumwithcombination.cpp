#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void subset( vector<int>&nums,vector<int>&v,int target)
{
     if(target<0){
        return;
         }

    if(target==0)
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=0;i<nums.size();i++)
    {
        if(v.size()==0){
    v.push_back(nums[i]);
    target=target-nums[i];
    subset(nums,v,target);  
    v.pop_back(); 
     target=target+nums[i]; 
        }
        else if(nums[i]>=v[v.size()-1]){
    v.push_back(nums[i]);
    target=target-nums[i];
    subset(nums,v,target);  
    v.pop_back(); 
     target=target+nums[i]; 
        }         
    }
}
int main()
{
vector<int>nums;
nums.push_back(2);
nums.push_back(3);
nums.push_back(6);
nums.push_back(7);

vector<int>v;
subset(nums,v,7);
}