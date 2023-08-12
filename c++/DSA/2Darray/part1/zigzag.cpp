#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{  
string str="PAYPALISHIRINGAB";
string v[4][8];

for(int i=0;i<4;i++)
{
for(int j=0;j<6;j++)
{
   v[i][j]="*";
}

}
int count=0;
int i=0;
 v[0][0]=str[count];
   count++;
while(i<6)
{
for(int j=1;j<4;j++)
{
    v[j][i]=str[count];
    count++;
}
++i;
for(int j=2;j>=0;j--)
{   
v[j][i]=str[count];
count++;
++i;
}
i--;

}

for(int i=0;i<4;i++)
{
for(int j=0;j<8;j++)
{
   cout<<v[i][j]<<" ";
}
cout<<endl;
}
// string str2="";
// for(int i=0;i<4;i++)
// {
//    for(int j=0;j<8;j++)
//    {
//       if(v[i][j]!="*")
//       str2=str2+v[i][j];
//    }
// }
// cout<<str2;
}