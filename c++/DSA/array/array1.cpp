#include<iostream>
using namespace std;
int main()
{
int arr[7];
for(int i=0;i<=6;i++)
cin>>arr[i];
for(int i=0;i<=6;i++)
if(arr[i]<35)
cout<<i<<" ";
}