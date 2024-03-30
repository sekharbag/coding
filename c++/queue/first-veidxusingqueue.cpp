#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int main()
{
int  arr[10]={3,-4,-7,30,7,-9,2,1,6,-1};
vector<int>ans;
queue<int>q;
int k=3;
for(int i=0;i<10;i++)
{
    if(arr[i]<0) q.push(i);
}
int i=0; int j=k-1;
while(j<10)
{
    if(q.front()>=i && q.front()<=j)
    {
    ans.push_back(arr[q.front()]);
    if(i+1>q.front())
    q.pop();
    }
    else{
        ans.push_back(0);
    }
    i++;
    j++;
}

for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
}