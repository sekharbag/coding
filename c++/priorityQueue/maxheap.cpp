#include<iostream>
#include <queue>
using namespace std;
int main()
{
 // priority_queue<int> pq;
  //min heap
  priority_queue<int,vector<int>,greater<int>> pq;
  pq.push(10);
  pq.push(2);
  pq.push(-6);
  pq.push(8);
  cout<<pq.top()<<endl;
//   while(pq.size()>0)
//   {
//     cout<<pq.top()<<" ";
//     pq.pop();
//   }
}