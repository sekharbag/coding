
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

for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
    }
    else
    {
       for(int j=m-1;j>=0;j--)
       {
        cout<<arr[i][j];
       }
    }
}
}  