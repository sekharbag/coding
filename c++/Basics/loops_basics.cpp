#include<iostream>
using namespace std;
int main(){
//     char ch='a';
//     cout<<(int) ch<<'\n';//type cast
//     cout<<(int) ch+100<<'\n'; 
//  bool flag =true;
//  cout<<(int) flag+9;
/*
float x;
cin>>x;
int y=(int)x;
if(y<0)
y=y-1;
cout<<x-y;

int x;
cin>>x;*/
/*
if(x<0){
    cout<<(x*-1);
}
else*/
/*
if(x<0)
{
    x=-x;
}
cout<<x;*/
/*
char val;
cin>>val;
int x=(int)val;
int y=(int)'z';
int z=(int)'A';
if(x>=z &&x<=y)
{
    cout<<"alphabet";
} 
else{
    cout<<"not alphabet";
}
int a,b,c;
cout<<"enter ur val";
cin>>a;
cout<<"enter ur val";
cin>>b;
cout<<"enter ur val";
cin>>c;*/
/*
if(a>b){
    if(a>c){
        cout<<a<<":"<<" is greatest";
    }
    else{
        cout<<c<<":"<<" is greatest";
    }
}
if(b>a){
    if(b>c){
        cout<<b<<":"<<" is greatest";
    }
    else{
        cout<<c<<":"<<" is greatest";
    }
}
*//*
if(((a+b)>c) &&((b+c)>a)&& ((a+c)>b)){
    cout<<"triangle";
}
else{
    cout<<"not";
}*//*
for(int i=0;i<100;i++){
    cout<<i<<endl;
}*//*
for(int i=2;i<100;i=i+2){
    cout<<i<<endl;
}*/
/*
for(int i=1;i<=100;i++)
{
    if(i%2==0)
    cout<<i<<endl;

}
*/
/*
int n;
cin>>n;
for(int i=19;i<=n;i=i+19)
{
    if(i%19==0){
        cout<<i<<endl;
    }
}

int n;
int j=3;
cin>>n;*//*
for(int i=1;i<=n;i++)
{
    if(j-i==2)
    {
        cout<<i<<endl;
        j=j+2;

    }
}
*/
// int n;
// cout<<"how many terms";
// cin>>n;
// int a=100;
// // for(int i=1;i<=n;i++){
// // cout<<a<<endl;
// // a=a*2;
// // //cout<<a<<endl;

// // }
// for(int i=1;i<=n;i++)
// {
//     if(a>0)
// cout<<a<<endl;
// a=a-3;
// }

// int a;
// cin>>a;
// int count=0;
// for(int i=1;i<=a;i++){
//     if(a%i==0)
//     {
//         count=count+1;
//         if(count>2)
//         {
//     cout<<"not a prime no";
//     break;
//         }
//     }
// }

// if(count<=2)
// cout<<"prime";
//  int n;
//  cout<<"enter the number ";
//  cin>>n;
//  int count=0;
//  while(n/10){
//     count++;
//     n=n/10;
//  }
//  cout<<count+1;
//int digit=0;
// while(n>0){
// digit=digit+n%10;
// n=n/10;
// }
// cout<<digit;
// int reverse_int=0;
// while(n>0){
//   digit=n%10;
//   reverse_int=(reverse_int*10)+digit;
//   n=n/10;  
// }
// cout<<reverse_int;
// int n;
// cout<<"enter your number";
// cin>>n;
// int sum=0;
// int sumj=0;
// for(int i=1;i<=n;i=i+2)
// sum=sum+i;
// for(int j=2;j<=n;j=j+2)
// sumj=sumj+j;

// cout<<sum-(sumj);
// if (n==0)
// cout<<1;
// else{
// int fact=1;
// for(int i=1;i<=n;i++)
// fact=fact*i;
// cout<<fact;
// }
// int F0 = 0 ;
// int  F1 = 1;
// int fibo=0;
// //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 
// //0 1 1 2 3 5 8 13 21 34 55 89 144 233
// for(int i=1;i<=n;i++)
// {
// cout<<fibo<<" ";
// F0=F1;
// F1=fibo;
// fibo=F0+F1;
// }
// int a,b;
// cout<<"enter your number";
// cin>>a;
// cout<<"enter your number";
// cin>>b;
// int power=1;
// for(int i=1;i<=b;i++)
// {
//     power=power*a;

// }
// cout<<power;
int n;
cout<<"enter your number";
cin>>n;
int digit=0;
for(int i=1;i<=n;i++){
int temp=i;
int amstrong_no=0;
while(temp>0)
{
digit=temp%10;
amstrong_no=(amstrong_no)+(digit*digit*digit);
temp=temp/10;
}
if(amstrong_no==i)
{
cout<<amstrong_no<<endl;

}


}
}



