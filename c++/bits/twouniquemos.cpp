#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
void findunique(vector<int>&a)
{
    int res=0;
    for(int i=0;i<a.size();i++)
    res=(res^a[i]);
    int k=0;
    int temp=res;
    while(true)
    {
        if((temp&1)==1) break;
        temp=temp>>1;
        k++;
    }
    int resval=0;
    for(int i=0;i<a.size();i++)
    {
        int num=a[i];
        if(((num>>k)&1)==1) resval^=a[i];
    }
    cout<<resval;
    cout<<endl;
    cout<<(res^resval);

}
int main()
{
    int arr[]={1,2,1,3,2,5};
    vector<int>a;
    for(int i=0;i<6;i++)
    a.push_back(arr[i]);

    findunique(a);

}
