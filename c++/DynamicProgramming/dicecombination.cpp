// line 205 notes
#include <bits/stdc++.h>
using namespace std;
const int mod = (int)pow(10, 9) + 7; 
int helper(int n , vector<int>&dp){
    if(n==0) {
        return 1;
    }
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n]%mod;
    int count=0;
    for(int i=1;i<=6;i++){
         count=count+helper(n-i,dp);
    }
    return dp[n]=count%mod;
}
int main() {
    int n=4;
     vector<int>dp(n+1,-1);
    cout<<helper(n,dp)%mod;
}