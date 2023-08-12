
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
int min_row=0;
int max_row=m-1;
int min_col=0;
int max_col=n-1;
int temp=0;
for(int i=0;i<10;i++)
{
    while(min_col<=max_col)
    {
        cout<<arr[min_row][min_col]<<" ";
        min_col++;

    }

     min_col=temp;
     temp=min_row+1;
    min_row=min_row+1;
    while(min_row<=max_row)
    {
        cout<<arr[min_row][max_col]<<" ";
        min_row++;
    }

   min_row=temp;
   temp=max_col-1;
   max_col=max_col-1;
   
   while(max_col>=min_col)
   {
    cout<<arr[max_row][max_col]<<" ";
    max_col--;
   }

   max_col=temp;
   temp=max_row-1;
    max_row= max_row-1;


    while(max_row>=min_row)
    {
        cout<<arr[max_row][min_col]<<" ";
        max_row--;
    }
    max_row=temp;
    temp=min_col+1;
    min_col=min_col+1;
    
}



}