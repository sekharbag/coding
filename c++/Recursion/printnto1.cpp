#include<iostream>
using namespace std;
void print1ton(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    print1ton(n-1);
}
int main()
{
print1ton(5);
}