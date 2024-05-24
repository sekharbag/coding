//https://atcoder.jp/contests/dp/tasks/dp_b
#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<climits>
using namespace std;
int abs(int a){
    if(a<0) return a*-1;
    return a;
}
int mincost(vector<int>&cost,int k,int n,int maxi, vector<int>&dp){
     if(n==0) return 0;
     if(n<0) return INT_MAX;
      int a=INT_MAX;
          if(dp[n]!=-1) return dp[n];
      for(int i=1;i<=k;i++){
        if(n-i>=0){
        a=abs(cost[n]-cost[n-i])+mincost(cost,k,n-i,maxi,dp);
        maxi=min(maxi,a);
        dp[n]=maxi;
        }
        else break;
      }
    
    return dp[n];
}
int iterative(vector<int>&cost,int k,int n,int maxi, vector<int>&dp){
    for(int i=1;i<cost.size();i++){
        int a=INT_MAX;
        for(int j=i-k;j<i;j++){
            if(j>=0){
           a=min(a,abs(cost[i]-cost[j])+dp[j]);
            }
          
        }
        dp[i]=a;
    }
    return dp[dp.size()-1];
}
int main()
{
    int cost[5]={10, 30 ,40 ,50 ,20};
    int k=3;
    int n=5;
    vector<int>dp(n,0);
    vector<int>costvec;
    int maxi=INT_MAX;
    for(int i=0;i<n;i++){
        costvec.push_back(cost[i]);
    }
     //cout<<mincost(costvec,k,costvec.size()-1, maxi,dp);
     cout<<iterative(costvec,k,costvec.size()-1, maxi,dp);
     cout<<endl;
      for(int i=0;i<dp.size();i++)
    cout<<dp[i]<<" ";
 

}