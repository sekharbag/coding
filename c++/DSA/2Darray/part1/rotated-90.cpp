

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
    for(int j=i+1;j<m;j++)
{
    swap(arr[i][j],arr[j][i]);

}
cout<<endl;
for(int i=m-1;i>=0;i--)
{
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}

}  