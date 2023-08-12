
#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>&v)
{
    int smax=INT8_MIN;
    int max=INT8_MIN;
    int idx=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            idx=i;
        }
        if(v[i]>smax&&v[i]<max)
        {
            if(i!=idx)
            smax=v[i];
        }

    }
    return smax;
}
int main()
{
vector<int>v;
int n;
cout<<"enter size";
cin>>n;
cout<<"enter your values";
for (int  i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<largest(v);

}

