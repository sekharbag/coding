#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
 string str="@)))@ldldlld";
 for(int i=0;i<str.length();i++)
 {
    
    int x=(int)str[i];
    if((x>=97&&x<=122)||(x>=65&&x<=90))
    cout<<"char ache"<<endl;
    else
    cout<<"char nei"<<endl;

 }
}