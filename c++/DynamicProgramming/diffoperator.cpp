#include<bits/stdc++.h> 
using namespace std;
int counsteps(int n, vector<int> &dp){
if(n==1) {
 return 0;
}
if(n<1) return INT_MAX;
int a=INT_MAX;
int b=INT_MAX;
int c=INT_MAX;
if(dp[n]!=-1) return dp[n];
if(n%2==0){
    a=1+counsteps(n/2,dp);
}
else if(n%3==0){
     b=1+counsteps(n/3,dp);
}
 c=1+counsteps(n-1,dp);
 return dp[n]=min(min(a,b),c);
}
int main(){
    cout<<"input n : ";
    int n;
    cin>>n;
    int max_count=INT_MAX;
    vector<int> dp(n+1,-1) ;
    cout<<counsteps(n,dp);
}