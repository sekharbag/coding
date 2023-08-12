
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

    int p ;
    int q;
    cout<<"enter p"<<endl;
    cin>>p;
    cout<<"enter q"<<endl;
    cin>>q;
int arr[m][n];
int arr2[p][q];
int res[m][q];
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
for(int i=0;i<p;i++)
{
    for(int j=0;j<q;j++)
    {
        cin>>arr2[i][j];
    }
    cout<<endl;
}

for(int i=0;i<p;i++)
{
    for(int j=0;j<q;j++)
    {
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<q;j++)

    {
            res[i][j]=0;
       for(int k=0;k<n;k++)
       {
        res[i][j]+=arr[i][k]*arr2[k][j];
       }
    }

}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}
}
  