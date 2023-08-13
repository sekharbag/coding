#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{  
vector<int>v;
v.push_back(-2);
v.push_back(1);
v.push_back(-3);
v.push_back(4);
v.push_back(-1);
v.push_back(2);
v.push_back(1);
v.push_back(-5);
v.push_back(4);
cout<<" "<<endl;
for(int i=0;i<v.size();i++)
{
    for(int j=i;j<v.size();j++)
    {
        for(int k=i;k<=j;k++)
        {
            cout<<v[k]<<" ";

        }
        cout<<endl;
    }
}


}

