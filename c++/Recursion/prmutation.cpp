#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void subset(string original,string derived)
{

    if(original.length()==0){
      cout<<derived<<endl;
    return;
    }
    for(int i=0;i<original.length();i++)
    {
       
    char ch=original[i];
    string leftstring=original.substr(0,i);
    string rightstring=original.substr(i+1);
    subset(leftstring+rightstring,derived+ch);

    }
   

}
int main()
{  
string str="abc";
// vector<string>v;
 subset(str,"");





}