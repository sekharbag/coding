#include<iostream>
using namespace std;
void  pip(int n)
{
    if(n==0) return;
    cout<<"pre"<<n<<endl;
    pip(n-1);
    cout<<"In"<<n<<endl;
    pip(n-1);
   
}
int main()
{
pip(3);
}