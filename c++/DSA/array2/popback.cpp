#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;//need not to mention the size
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
cout<<v.size()<<endl;
for(int  i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.pop_back();//with popback size changes but capacity remains same

for(int  i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}
