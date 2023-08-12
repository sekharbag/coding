#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int print(vector<int>&v,int i,int *max)
{
   

    if(i>=v.size())
    return *max;
    if(v[i]>*max)
    *max=v[i];
    return print(v,i+1,max);
}
int main()
{  
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
int i=0;
int max=INT_MIN;
cout<<print(v,i,&max);


}