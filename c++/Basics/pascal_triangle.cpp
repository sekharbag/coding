#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    if(n==0)
        return 1;
        else{
    for(int i=1;i<=n;i++){ 
        fact=fact*i;
        }
return fact;
    }
}
int main(){
    cout<<"entr number";
    int n;
    cin>>n;
    int value=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            value=fact(i)/(fact(j)*fact(i-j));
            cout<<value<<" ";
        }
        cout<<endl;
    }
}