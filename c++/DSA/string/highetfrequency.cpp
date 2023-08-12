#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
 string str;
 cin>>str;
//  int max=0;
//  char ch;
//  for(int i=0;i<str.length();i++)
//  {
//      int count=1;
//     for(int j=i+1;j<str.length();j++)
//     {

//         if(str[i]==str[j])
//         {
//             count++;
//         }
//         if(count>max)
//         {
//         max=count;
//           ch=str[i];
//         }
//     }

//  }
//      cout<<max<<endl;
//  cout<<ch;
vector<int>v(26);
for(int i=0;i<str.length();i++)
{  int ascii=(int)str[i];
   v[ascii-97]=v[ascii-97]+1;

}
int max=v[0];
char ch;
for(int i=0;i<v.size();i++)
{
    if(max<v[i])
    {
        max=v[i];

    }

}
for(int i=0;i<v.size();i++)
{
    if(v[i]==max)
    {
       ch=(char)(i+97);

    }

}
cout<<max<<" "<<ch;
}