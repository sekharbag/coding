
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()   
{  
int arr[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int max=arr[0][0];
int smax=arr[0][0];
int idx=-1;
int idx1=-1;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(max<arr[i][j])
        {
            max=arr[i][j];
            idx=i;
            idx1=j;
            
        }
    }
 
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(smax<arr[i][j]&&smax!=max)
        {
           if(idx!=i||idx1!=j)
            smax=arr[i][j];
        }
    }
 
}
   cout<<max<<endl;
   cout<<smax;
}  