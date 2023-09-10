#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int  arr[9]={2,-3,4,4,-7,-1,4,-2,6};
vector<int>ans;
int k=4;
int negative_idx=-1;
for(int i=0;i<k;i++)
{
if(arr[i]<0){
negative_idx=i;
ans.push_back(arr[negative_idx]);
break;
}
}
//sliding window
int i=1;
int j=k;
while(j<9)
{
if(negative_idx>=i) 
ans.push_back(arr[negative_idx]);
else 
{
    for(negative_idx=i;negative_idx<j;negative_idx++)
    {
        if(arr[negative_idx]<0)
        break;
    }
    ans.push_back(arr[negative_idx]);
}
i++;
j++;
}
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
}