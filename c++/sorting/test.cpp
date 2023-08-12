#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string str="AZYZXBDXJK";
    vector<char>v;
    
  
     for(int i=0;i<str.length();i++)
     {
        v.push_back(str[i]);
    }
     int n=v.size();
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
