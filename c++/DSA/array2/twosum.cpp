#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;
int y;
cout<<"enter your values";
cin>>y;
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
cout<<v.size()<<endl;
for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]+v[j]==y){
         cout<<"("<<i<<" "<<j<<")"<<endl;
        }
    }
}

}
