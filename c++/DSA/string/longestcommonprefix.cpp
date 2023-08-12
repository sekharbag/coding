#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
 vector<string>v;
int n;
cout<<"enter size";
cin>>n;
cout<<"enter your values";
for (int  i = 0; i < n; i++)
{
    string  x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());


for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<endl;

}

}