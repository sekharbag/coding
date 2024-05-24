//binary string with out consecutive one
#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<climits>
using namespace std;
int count(string str,int n){
    if(str.size()==n) {
        cout<<str<<endl;
        return 1;
    }
     if(str[str.size()-1]=='1')
     return count(str+'0',n);
     return count(str+'0',n)+count(str+'1',n);
}
int main(){
    cout<<"input n ";
    int n ;
    cin>>n;
    cout<<count("",n);

}