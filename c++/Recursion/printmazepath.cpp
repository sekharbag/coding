#include<iostream>
using namespace std;
void printmaze(int sr,int sc,int er,int ec,string s)
{
    
    if(sc>ec||sr>er) return ;
     if(sc==ec&&sr==er) {
        cout<<s<<endl;
        return;
        } 
    printmaze(sr,sc+1,er,ec,s+"R");
    printmaze(sr+1,sc,er,ec,s+"D");
   
}
int main()
{
printmaze(0,0,2,2,"");
}