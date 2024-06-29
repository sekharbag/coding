// https://www.spoj.com/problems/MCOINS/
#include <bits/stdc++.h>
using namespace std;
bool winingorloosingstate(long long  n, int k, int l, vector<int> &dp)
{
    if(n<0) return true;
    if (n == 1)
        return true;
    if (n == k)
        return true;
    if (n == l)
        return true;
    if (dp[n] != -1){
        return (bool)dp[n];
    }
    bool a=!(winingorloosingstate(n - 1, k, l, dp) && winingorloosingstate(n - k, k, l, dp) && winingorloosingstate(n - l, k, l, dp));
    if(a==true) return dp[n]=1;
   return  dp[n]=0;
}
int main()
{
    vector<long long > v{3, 12, 113};
    vector<int> dp( 88888 + 1, -1);
    vector<char> ans;
    for (int i = 0; i < v.size(); i++)
    {
        bool a = winingorloosingstate(v[i], 2, 3, dp);
        if (a==true)
            ans.push_back('A');
        else
            ans.push_back('B');
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}