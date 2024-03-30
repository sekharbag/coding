#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void subset(string original,string derived)
{
    char ch=original[0];
    if(original==""){
     cout<<derived<<endl;
    return;
    }
    subset(original.substr(1),derived+ch);
    subset(original.substr(1),derived);
}

void subset(string original,string derived,int i,vector<string>&v)
{
    if(original.length()==i){
     v.push_back(derived);
    return;
    }
    subset(original,derived+original[i],i+1,v);
     subset(original,derived,i+1,v);
}
int main()
{  
string str="ab";
vector<string>v;
subset(str,"");
// subset(str,"",0,v);
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<endl;
// }


}