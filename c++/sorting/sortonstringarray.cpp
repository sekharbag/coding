#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{


  string str="sekhar";
  string str1="sekhbr";
  vector<int>v;
   vector<int>v1;
  for(int i=0;i<str.length();i++)
  {
    v.push_back((int) str[i]);
     
  }
    for(int i=0;i<str.length();i++)
  {
    cout<<v[i]<<" ";
     
  }
cout<<endl;
    for(int i=0;i<str1.length();i++)
  {
    v1.push_back((int) str1[i]);
     
  }
    for(int i=0;i<str.length();i++)
  {
    cout<<v1[i]<<" ";
     
  }
  for(int i=0;i<min(v.size(),v1.size());i++)
  {
    if(v[i]>v1[i])
    {
        cout<<"true";
    }
  }
}

