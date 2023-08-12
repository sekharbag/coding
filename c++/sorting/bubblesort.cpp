#include<iostream>
#include<vector>
using namespace std;
// bool sortedornot(vector<int>&v)
// {
//     int n=v.size();
  
//        bool issorted=true;
//     for(int i=0;i<n-1;i++)
// {
//     if(v[i]>v[i+1]){
//     issorted=false;
//     break;
//     }
// }
//     return issorted;

// }
int main()
{
    vector<string>v(4);
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

 for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


for(int i=0;i<n-1;i++)
{
    bool sorted=true;
    
    for(int j=0;j<n-1-i;j++)
    {
        if(v[j]>v[j+1])
        {
            swap(v[j],v[j+1]);
            sorted =false;
        }
    }
    if(sorted==true)
    break;
    }
cout<<endl;
 for(int i=0;i<n;i++)
    {
cout<<v[i]<<" ";
    }

  
}
