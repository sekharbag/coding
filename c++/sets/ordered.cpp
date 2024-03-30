#include<iostream>
#include<unordered_set>
#include<set>
#include<map>
using namespace std;
int main()
{
    set<int>s;
    s.insert(9);
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(9);
    for(auto ele :s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int,int>mp;
    map<int,int>mp1;
    mp1[1]=80;
    mp1[2]=90;
    mp[1]=20;
    mp[3]=10;
    mp[2]=30;
    mp1=mp;
    for(auto ele :mp1)
    {
        cout<<ele.first<<": "<<ele.second<<endl;
    }
}