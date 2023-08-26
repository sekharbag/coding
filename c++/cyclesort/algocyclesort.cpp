#include<iostream>
#include<vector>
using namespace std;
void cyclicsort(vector<int>&v)
{
    int i=0;
while(i<v.size()){
    if(v[i]!=(i))
    {
        swap(v[v[i]],v[i]);
    }
    else
    {
       i++;
    }
    
}
}
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
     v.push_back(6);
    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    cyclicsort(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}


