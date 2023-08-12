#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
void fun(int n)
{
    if(n==0) return  ;
    cout<<"hello world"<<endl;
    fun(n-1);
}

int main(){
  fun(3);
}