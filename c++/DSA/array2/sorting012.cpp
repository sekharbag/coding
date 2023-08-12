#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        count++;
    }
      while(i<=j){
         if(v[j]==1||v[j]==2)
         j--;
         if(v[i]==0)
         i++;
        if((v[j]==0&&(v[i]==1||v[i]==2))&&i<j)
        {
        swap(v[j],v[i]);
        i++;
        j--;
        }
         }

           i=count;
         j=v.size()-1;
    while(i<=j){
         if(v[j]==2)
         j--;
         if(v[i]==1)
         i++;
        if(v[j]==1&&v[i]==2&&i<j)
        {
        swap(v[j],v[i]);
        i++;
        j--;
        }
         }
    
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
sort(v);
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

}
