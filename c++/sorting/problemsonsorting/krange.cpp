#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main()
{
//lecture problems on sorting
int arr[]={5,3,10,6};
int n=4;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
float kmin=(float)INT_MIN;
float kmax=(float)INT_MAX;
bool flag=true;
float a;
  float b;
for(int i=0;i<n-1;i++)
{
    
    if(arr[i]-arr[i+1]>=0)
    {
        a=((arr[i]+arr[i+1])/2);
           kmin=max(a,kmin);
    }
 
  
   else
    {
        b=((arr[i]+arr[i+1])/2);
        kmax=min(b,kmax);
    }
    if(kmin>kmax){
        flag=false;
        break;
    }
    
}
if(flag==false)
cout<<-1;
cout<<kmax<<" "<<kmin;

}
