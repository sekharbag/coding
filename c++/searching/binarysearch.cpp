#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main()
{
//704 leetcode
//find lowaer bound of x
//{1,2,4,5,9,16,18,21,21}
//x=20
//so lower bound =18
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++)
{
    cin>>nums[i];
}
int target;
cout<<"element which we need"<<endl;
cin>>target;
 int low=0;
        int hi=n-1;
        int mid;
        bool flag=false;
      while(hi>=low)
        {
            mid=(hi+low)/2;
                    if(nums[mid]==target){
         cout<<nums[mid-1]<<endl;
         flag =true;
         cout<<"XD";
         break;
                    }
        else if(nums[mid]>target)
        {
            hi=mid-1;
        }
        else
        low=mid+1;

                 }     
               if(flag==false)
               {
                cout<<nums[hi];
               }
}

// /1 2 4 5 9 15 18 21 24
