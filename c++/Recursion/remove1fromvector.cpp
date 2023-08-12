#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<int> remove(vector<int>&v,vector<int>&v1,int i)
{
    if(i==v.size())
    {
     return v1 ;
    }
    if(v[i]!=1)
    v1.push_back(v[i]);
    return remove(v,v1,i+1);

}
int main()
{  

vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(1);
v.push_back(3);

vector<int>v1;
vector<int>v3=remove(v,v1,0);

for(int i=0;i<v3.size();i++)
{
    cout<<v3[i]<<endl;
}

}