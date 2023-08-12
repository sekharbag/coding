#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;
v.push_back(100);
v.push_back(12);
v.push_back(111);
v.push_back(13);
for (int  i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(),v.end());

for (int  i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

}
