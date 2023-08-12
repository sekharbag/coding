#include<iostream>
using namespace std;
int main()
{
char str []={'a','b','c'};
// for(int i=0;i<3;i++)
// {
//     cout<<str[i];
// }
for(int i=0;str[i]!='\0';i++)
{
    cout<<str[i];
}
cout<<str;

}