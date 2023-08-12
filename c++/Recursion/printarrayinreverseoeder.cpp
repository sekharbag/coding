#include<iostream>
#include<vector>
#include<string.h>
#include<climits>
using namespace std;
void   reverse(vector<int>&v,int idx)
{
if(idx<0)
return;
cout<<v[idx]<<" ";
cout<<endl;
reverse(v,idx-1);

}
int main()
{  
vector<int>v;
v.push_back(4);
v.push_back(-1);
v.push_back(10);
int size=v.size()-1;
reverse(v,size);



}