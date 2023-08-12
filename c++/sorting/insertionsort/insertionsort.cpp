#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
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
for(int i=1;i<v.size();i++)
{
    // int element=v[i];
    // int idx=i;
    // int count =0;
    // for(int j=i-1;j>=0;j--)
    // {
    //     if(element<v[j])
    //     {
    //     swap(v[idx],v[j]);
    //     count++;
    //     idx=i-count;
    //     }
    //     else break;
    // }  
    int j=i;
    // while(j>=1)
    // {
    //     if(v[j]>v[j-1])
    //     break;
    //     else 
    //     swap(v[j],v[j-1]);
    //     j--;
    // }
    while(v[j]<v[j-1]&&j>=1)
    {
        swap(v[j],v[j-1]);
        j--;
     }
}

for(int ele:v)
 {
    cout<<ele<<" ";
 }

}
