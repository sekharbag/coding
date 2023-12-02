#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
void insert(vector<int>&v,int N)
{
    if(N<0) return ;
    v.push_back(N);
    int x=N;
    insert(v,N-5);
    v.push_back(x);
    
}
    vector<int> pattern(int N){
        // code here
        vector<int>v;
         insert(v,N);
         for(int i=0;i<v.size();i++)
         cout<<v[i]<<" ";
       return v;
    }
    int main()
    {
         pattern(4);

    }