//https://cses.fi/problemset/task/1637
#include <bits/stdc++.h>
using namespace std;
int helper(int n){
    if(n==0){
       return 0;
    }
    int a=INT_MAX;
    int mini=INT_MAX;
    int v=n;
    while(v>0){
        if(v%10!=0){
          a=helper(n-v%10);
        }
         v=v/10;
        mini=min(a,mini);
    }
    return 1+mini;
}
int main(){
    cout<<helper(27);

}