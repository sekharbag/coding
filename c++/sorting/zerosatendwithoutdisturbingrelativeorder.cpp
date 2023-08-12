#include<iostream>
#include<vector>
using namespace std;
//5 0 1 2 0 0 4 0 3 
int main()
{
    vector<int>v1(9);
vector<int>v;
int count=0;
for(int i=0;i<v1.size();i++)
{
    cin>>v1[i];
}
for(int i=0;i<v1.size();i++)
{
    if(v1[i]!=0){
    v.push_back(v1[i]);
    count++;
    }
}
for(int i=count;i<v1.size();i++)
v.push_back(0);

for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
}