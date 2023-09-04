#include<iostream>
using namespace std;
  int sum=0;
void  total_path(int m,int n,int r,int d,string ri,string down)
{
   if(r>n||d>m)
   return;
   if(r==n&&d==m){
   sum=sum+1;
   return ;
   }
    total_path(m,n,r+1,d,ri+"R",down);
     total_path(m,n,r,d+1,ri,down+"D");

}
int main()
{
 total_path(2,1,0,0,"","");
        cout<< sum;
}