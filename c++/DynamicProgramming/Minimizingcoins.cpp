// line 205 notes
#include <bits/stdc++.h>
using namespace std;
int miniumpath(vector<int>&v,int target,  vector<int>&dp){
       if(target<0) return INT_MAX-1;
       if(target==0) return 0;
       int minimumcoins=INT_MAX;
       if(dp[target]!=-1) return dp[target];
       for(int i=0;i<v.size();i++){
           minimumcoins=  min(minimumcoins, miniumpath(v,target-v[i],dp));
       }
       return dp[target]= 1+minimumcoins;
}
int main()
{
  vector<int>v;
  v.push_back(1);
  v.push_back(5);
   v.push_back(7);
   int target=11;
   vector<int>dp(target+1,-1);
   cout<<miniumpath(v,11,dp);
}