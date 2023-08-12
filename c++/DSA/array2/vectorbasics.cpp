#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;//need not to mention the size
v.push_back(6);
cout<<v.size()<<endl;//how many element are present
cout<<v.capacity()<<endl;//actual capacity ie how array is growing
v.push_back(7);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(8);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(9);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v[0]<<endl;
cout<<v[1];

}
