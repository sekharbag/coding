#include<iostream>
using namespace std;
void print1to_n(int n)
{
    if(n==0) return;
    print1to_n(n-1);
     cout<<n<<endl;
}
int main()
{
print1to_n(5);
}