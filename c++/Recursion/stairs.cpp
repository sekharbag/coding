#include<iostream>
using namespace std;
int  stair(int a)
{
 if(a==2) return 2;
 else if(a==1) return 1;
 else return stair(a-1)+stair(a-2);
   
}
// int stair(int a)
// {
//     if(a==2) return 2;
//     if(a==1) return 1;
//     if(a==3 ) return stair(2)+stair(1)+1;
//     else return stair(a-1)+stair(a-2)+stair(a-3);
// }
int stair(int a,int b)
{
    if(a>b) return 0;
   if(a==b) return 1;
   else return stair(a+1,b)+stair(a+2,b);
}
int main()
{
cout<<stair(0,3)<<endl;
cout<<stair(3);
}