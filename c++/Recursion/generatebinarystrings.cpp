#include<iostream>
using namespace std;
void generatebinary(int n,string s,int i)
{
    if(s.length()==n){
    cout<<s<<endl;
    return;
    }

        if(s[i-1]=='0'||s.length()==0)
        {
        generatebinary(n,s+'0',i+1);
        generatebinary(n,s+'1',i+1);
        }
        else if(s[i-1]=='1')
         {
              generatebinary(n,s+'0',i+1);
         }
}

int main(){
generatebinary(2,"",0);

}