// page 197 algo notes
#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<climits>
using namespace std;
int noh(int n){
    if(n==1 || n==2) return n;
    return noh(n-1)+(n-1)*noh(n-2);
}
int main(){
    cout<<noh(3);
}