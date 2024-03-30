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
    mp["sekhar"]=3;
    mp["raghav"]=4;
    mp["noob"]=5;
      cout<<mp["sekhar"];
      cout<<endl;
   mp.erase("sekhar");
 
  for(auto p: mp)
   {
    cout<<p.first<<" "<<":"<<p.second<<endl;
   }
 
 
}
