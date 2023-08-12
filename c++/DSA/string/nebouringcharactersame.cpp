#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str;
 cin>>str;
 int count=0;
 if(str[0]!=str[1])
 count++;
for(int i=1;i<str.length();i++)
{
    if(str[i]!=str[i-1]&&str[i]!=str[i+1])
    count++;
}
cout<<count;
}