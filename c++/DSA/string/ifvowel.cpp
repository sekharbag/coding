#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s ="sekhar";
    int count=0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
        count++;
        }
        i++;
    }
    cout<<count;
}