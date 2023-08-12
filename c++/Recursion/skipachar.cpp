#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

string  remove(string str,string new_str,int i)
{
    if(i>=str.length())
    return new_str;
    if(str[i]!='a')
    new_str=new_str+str[i];
    return remove(str,new_str,i+1);

}
string remove(string original,string ans)
{
        char ch=original[0];

    if(original=="") 
    {
        cout<<ans ;
    return ans;
    }
    else if(ch=='a')
    remove(original.substr(1),ans);
    else {
    ans=ans+ch;
    remove(original.substr(1),ans);
    }
}
int main()
{  
string str="abac";
cout<<remove(str,"",0);
remove(str,"");



}