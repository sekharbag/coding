#include<iostream>
using namespace std;
int main()
{
    int n,e;
    cout<<"size of the array"<<endl;
    cin>>n;
    cout<<"element you want to search"<<endl;
    cin>>e;
    cout<<"enter elemnts of your array"<<":";
int arr[n];
for(int i=0;i<=n-1;i++)
cin>>arr[i];
bool flag=false;
for(int i=0;i<=n-1;i++)
{
    if(arr[i]==e)
    flag=true;
   
}
if(flag==true)
cout<<"present";
else 
cout<<"not present";

}