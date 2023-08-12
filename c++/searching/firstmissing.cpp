#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main()
{
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++)
{
    cin>>nums[i];
}
        int low=0;
        int hi=n-1;
        int mid;
        int ans;
      while(hi>=low)
        {
            mid=(hi+low)/2;
            if(nums[mid]==mid) low=mid+1;
            else 
           {
                ans =mid;
                hi=mid-1;
            }
        }
        cout<<ans;

}

                   
                
             



//1 2 2 3 3 3 3 3 4 4 5 8 9 