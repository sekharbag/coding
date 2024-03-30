#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
string str="00000000000000000000000000001011";
int result=0;
int n=str.size();
for(int i=str.size()-1;i>=0;i--)
{
    char ch=str[i];
    // result+=(ch-48)*pow(2,(n-i-1));
    result+=(ch-48)*(1<<(n-i-1));
}
cout<<result<<endl;
}
