#include<iostream>
using namespace std;
void fisrtandlast(int *ptr1,int*ptr2,int n){
    *ptr1=n%10;
    int digit=0;
    while(n>9){
        n=n/10;
    }
*ptr2=n;
}
int main()
{
        int n;
  cout<<"enter the number";
   cin>>n;
   int first_digit,last_digit;
    fisrtandlast(&first_digit,&last_digit,n);
    cout<<first_digit<<endl<<last_digit;
//    int last_digit;

//    first_digit=n%10;
//    cout<<first_digit<<endl;
//    int digit=0;
//      while(n>0)
//       {
//       digit=n%10;
//       n=n/10;
//       if(n==0)
//        last_digit=digit;
//        }
//        cout<<last_digit<<endl;
}