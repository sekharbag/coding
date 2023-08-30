#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
     v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.push_back(10);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(9);
 vector<int>pre(v.size(),0);
pre[0]=v[0];
// prefix sum
    for(int i=1;i<v.size();i++)
   pre[i]=v[i]+pre[i-1];
   
   bool flag=false;
   int idx=-1;
   for(int i=1;i<pre.size();i++)
   {
    if(2*pre[i]==pre[pre.size()-1])
    {
    flag=true;
    idx=i;
    break;
    }
   }
if(flag==true)
cout<<"partioned"<<" "<<idx;
else 
cout<<"not possible";

}


