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
           if(str[i]>='X')
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

int i=0;
int j=v.size()-1;
while(i<j)
{

    swap(v[i],v[j]);
    i++;
    j--;
    
}
cout<<endl;
  for(int i=0;i<n;i++)
     {
 cout<<v[i]<<" ";
    }
    string str1="";
    for(int i=0;i<v.size();i++)
    {
        str1=str1+v[i];
    }
    cout<<"\n";
    cout<<"\n";

    cout<<str1;
}
