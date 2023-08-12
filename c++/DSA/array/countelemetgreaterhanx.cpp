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
int x;
cout<<"enter your element  "<<endl;
cin>>x;
int count=0;
for(int i=0;i<=n-1;i++){
    if(x<arr[i])
    count++;
}
cout<<count<<endl;
}