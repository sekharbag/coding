#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pair class
    pair<int,int>p;
    p.first=1;
    p.second=5;
    //unordered map recives pair of values
   unordered_map<string,int> mp;
    pair<string,int>p1;
    p1.first="sekhar";
    p1.second=1;
    mp.insert(p1);
    p1.first="raghav";
    p1.second=2;
    mp.insert(p1);
     p1.first="noob";
    p1.second=3;
    mp.insert(p1);
//    for(pair<string,int> p: mp)
//    {
//     cout<<p.first<<" "<<":"<<p.second<<endl;
//    }
  for(auto p: mp)
   {
    cout<<p.first<<" "<<":"<<p.second<<endl;
   }

cout<<4999950000%1000000007;
}

