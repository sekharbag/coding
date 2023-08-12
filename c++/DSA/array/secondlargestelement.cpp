#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size of the array"<<endl;
    cin>>n;
    cout<<"enter elemnts of your array"<<":";
     int arr[n];
for(int i=0;i<=n-1;i++)
cin>>arr[i];
int max=arr[0];
int index=0;
for(int i=1;i<=n-1;i++)
{
  if(max<arr[i] ){
   max=arr[i];
   index=i;
   }

}
int smax=arr[0];
for(int i=1;i<=n-1;i++){
    if(smax<arr[i] && arr[i]<max) 
    {
    if(i!=index)
    smax=arr[i]; 
    }
}
cout<<smax;
}