#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;
bool sorted=false;

for (int  i = 0; i < 4; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for (int  i = 0; i < 4; i++)
{
    cout<<v[i]<<" ";
}

cout<<endl;

for(int i=0;i<4;i++)
{
    if(v[i]<=v[i+1])
    sorted=true;
    else 
    {
        sorted =false;
        break;

    }

}

if(sorted==true)
{
    cout<<"sorted";
}
else
cout<<"not sorted";
}
