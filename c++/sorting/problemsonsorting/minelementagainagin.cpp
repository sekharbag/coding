#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    vector<int>isvisisted(5,0);
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

 for(int ele:v) // for each loop
 {
    cout<<ele<<" ";
 }
    cout<<endl;
for(int i=0;i<v.size();i++)
{
    int min=10000;
    int idx=-1;
    for(int j=0;j<v.size();j++)
    {
        if(v[j]<min && isvisisted[j]==0)
        {
        min=v[j];
        idx=j;
        }
    }

    v[idx]=i;
    isvisisted[idx]=1;
    
}

       for(int ele:v)
 {
    cout<<ele<<" ";
 }
 cout<<endl;

     
   

}
