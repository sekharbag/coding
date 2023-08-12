
#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i,int j,vector<int>&v){
      while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
            }
    
}

int main()
{
vector<int>v;
int n;
cout<<"enter size";
cin>>n;
cout<<"enter your values";
for (int  i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
reversepart(0,4,v);
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
