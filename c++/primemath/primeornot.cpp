#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int a)
{
    if(a==1) return false;
    for(int i=2;i<= sqrt(a);i++){
    if(a%i==0) return false;
    }
    return true;
}
void factors(int a )
{
    for(int i=1;i<= sqrt(a);i++){
    if(a%i==0) {
        cout<<i<<endl;
        if((a/i)!=i)
        cout<<(a/i)<<endl;
    }
    }
}
int main()
{
cout<<is_prime(16)<<endl;
factors(60);
}
