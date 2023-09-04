#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int  arr[9]={7,1,2,5,8,4,9,3,6};
int k=4;
int prv_sum=0;
for(int i=0;i<k;i++)
{
prv_sum=prv_sum+arr[i];
}
int i=1;
int j=k;
int max=INT_MIN;
while(j<9)
{
if(max<prv_sum)
max=prv_sum;
cout<<max<<endl;
int current_sum=prv_sum-arr[i-1]+arr[j];
prv_sum=current_sum;
i++;
j++;

}
// cout<<max;
}