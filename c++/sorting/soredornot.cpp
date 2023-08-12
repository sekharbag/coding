#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    bool issorted=true;
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
    if(v[i]>v[i+1]){
    issorted=false;
    break;
    }
}
cout<<issorted<<endl;
}
