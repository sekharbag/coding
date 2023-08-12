#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v,int i)
{
    if(i>=v.size())
    return;
    cout<<v[i]<<endl;
    print(v,i+1);

}
int main()
{  
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
int i=0;
print(v,i);

}