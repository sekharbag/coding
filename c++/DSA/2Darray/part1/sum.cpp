
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()   
{  
    int m;
    int n;
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"enter n"<<endl;
    cin>>n;
int arr[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
    cout<<endl;
}

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int i=0;i<m;i++)
{
    for(int j=i+1;j<n;j++)
    {
       if(i==j)
       {
        arr[i][j]=arr[i][j];
       }
       else
      {
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp; 
      }
    }
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}  