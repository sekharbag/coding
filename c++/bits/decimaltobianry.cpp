#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
string str="10010";
int result=0;
for(int i=str.size()-1;i>=0;i--)
{
    //2^x ===1<<x
    char ch=str[i];
    result=result+(ch-'0')*(1<<(str.size()-i-1));
}
cout<<result<<endl;
}
