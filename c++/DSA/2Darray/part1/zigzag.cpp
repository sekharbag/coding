#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{  int numRows=2;
string str="ABc";
string v[numRows][str.length()];
for(int i=0;i<numRows;i++)
{
for(int j=0;j<str.length();j++)
{
   v[i][j]="*";
}
}

int count=0;
int i=0;
 v[0][0]=str[count];
   count++;
while(i<str.length()&&count<str.length())
{
for(int j=1;j<numRows&&count<str.length();j++)
{
    v[j][i]=str[count];
    count++;
}
i++;
for(int k=numRows-2;k>=0&&count<str.length();k--)
{   
v[k][i]=str[count];
count++;
i++;
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
string str2="";
for(int i=0;i<numRows;i++)
{
   for(int j=0;j<str.length();j++)
   {
      if(v[i][j]!="*")
      str2=str2+v[i][j];
   }
}
cout<<str2;
}












