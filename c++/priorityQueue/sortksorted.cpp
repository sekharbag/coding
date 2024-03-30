#include<iostream>
#include <queue>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;
    int k=3;
   int arr[]={6,5,3,2,8,10,9};
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<7;i++)
    {
      pq.push(arr[i]);
      if(pq.size()==k+1) {
         v.push_back(pq.top());
        pq.pop();
      }
    }
    while(pq.size()>0)
    {
      v.push_back(pq.top());
      pq.pop();
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  
}
