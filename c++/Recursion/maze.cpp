#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sc>ec||sr>er) return 0;
    else if(sc==ec&&sr==er) return 1;
    return maze(sr,sc+1,er,ec)+maze(sr+1,sc,er,ec);
}
int main()
{
cout<<maze(0,0,2,2);
}