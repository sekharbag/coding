#include<iostream>
#include <queue>
#include<vector>
using namespace std;
int kthlargest(int arr[],int k)
{
      priority_queue<int,vector<int>,greater<int>> pq;
   for(int i=0;i<9;i++)
  {
     pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
  }
  return pq.top();
}
int main()
{
    int k=3;
   int arr[]={30,20,-4,5,18,24,1,-7,56};
  priority_queue<int> pq;
  for(int i=0;i<9;i++)
  {
     pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
    
  }
  cout<<pq.top();
  cout<<endl;
  cout<<kthlargest(arr,k);
  cout<<(char)97;
}
