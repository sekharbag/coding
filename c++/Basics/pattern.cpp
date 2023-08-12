#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    int m;
        cout<<"enter no";
cin>>m;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //    for(int i=1;i<=n;i++){
    //     for(int j=1;j<=k;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    //     for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    //         for(int i=1;i<=n;i++){
    //     for(int j=n;j>=i;j--)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //         for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<(2*j-1)<<" ";
    //     }
    //     cout<<endl;
    // }
    //         for(int i=1;i<=n;i++){
    //     for(int j=1;j<=k;j++)
    //     {
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }

    //         for(int i=1;i<=n;i++){
    //             if(i==((n/2)+1)){
    //                   for(int j=1;j<=k;j++)
    //                   cout<<"*";
    //             }
    //             else{
    //     for(int j=1;j<=k;j++)
        
    //     {
    //         if(j==((k/2)+1))
    //         cout<<"*";
    //         else
    //         cout<<" ";
    //     }}
    //     cout<<endl;
    // }

   //     for(int i=1;i<=n;i++){
   //      if(i==(n/2+1)){
   //    for(int j=1;j<=k;j++){
   //    if(j==(k/2+1))         
   //     cout<<"*";
   //     else
   //     cout<<" ";}
   //      }
   //      if(i<(n/2+1))
   //      {
   //     for(int j=1;j<=k;j++)
   //      {
   //         cout<<"*"<<"";
   //   }
   //      }

   //      if(i>(n/2+1))
   //      {
   //     for(int j=1;j<=k;j++)
   //      {
   //         cout<<"*"<<"";
   //   }
   //      }
   //     cout<<endl;
   //  }

   // for(int i=1;i<=n;i++){
   // for(int j=1;j<=n;j++){
   //    if(j==i||i+j==n+1)
   //    cout<<"*";
   //    else
   //    cout<<" ";
   // }
   //        cout<<endl;

   // }
   // int m=1;
   // for(int i=1;i<=n;i++){
   // for(int j=1;j<=i;j++){
   //    cout<<m;
   //    m++;
   // }
   //        cout<<endl;
   // }
//                bool m=true;

//    for(int i=1;i<=n;i++){

//    for(int j=1;j<=i;j++){
//     m=true;
//       if((i+j)%2!=0){
//       m=false;
//       cout<<m;
//       }
//       else
//       cout<<m;
//    }
//  cout<<endl;

//    }
// for(int i=1;i<=n;i++){
//   for(int j=1;j<=n;j++){
// if(i+j>n){
//     cout<<"*";}
//     else cout<<" ";
//   }
//   cout<<endl;
// }

// for(int i=1;i<=n;i++){
//      for(int k=n-1;k>=i;k--)
//      {
//     cout<<" ";
//   }
//   for(int j=1;j<=n;j++){
//     cout<<"*";
//     }
  
//     cout<<endl;

//   }

// for(int i=1;i<=n;i++){
//      for(int k=m/2;k>=i;k--)
//      {
//     cout<<" ";
//   }
//   for(int j=1;j<=((2*i)-1);j++){
// cout<<"*";
//   }
  
//       cout<<endl;


//     }

 
//  int nsp=n-1;
//  int nst=1;
//  for(int i=1;i<=n;i++){
//   for(int j=1;j<=nsp;j++)
//   cout<<" ";
 
//  nsp--;
//  for(int j=1;j<=nst;j++){
//   cout<<"*";
//  }
// nst=nst+2;
// cout<<endl;
//  }
// int a=1;
// int temp=a;
// for(int i=1;i<=n;i++){
  
//   for(int j=1;j<=i;j++)
//   {
//     cout<<a;
//     a--;
//   }
//   cout<<endl;
//       temp++;
//       a=temp;


// }
// for(int i=1;i<=n;i++){
//   for(int j=1;j<=n-i;j++){
//     cout<<" ";
//   }
//   for(int j=1;j<=i;j++){
//     cout<<j;
//   }
//   for(int j=i-1;j>=1;j--){
//     cout<<j;
//   }
int nsp=(n-1);
int nst=1;
for(int i=1;i<=((2*n)-1);i++){
  if(i<=((((2*n)-1)/2)+1)){
for(int j=1;j<=nsp;j++){
  cout<<" ";
}

nsp--;
  }
  if(i<=((((2*n)-1)/2)+1)){
for(int j=1;j<=nst;j++){
  cout<<"*";
}
nst=nst+2;
  }
   if(i>((((2*n)-1)/2)+1))
   {
    for(int j=((((2*n)-1)/2)+1);j<i;j++)    
    {
      cout<<"%";
    }
   }
   else{
    for(int j=(2*n-(i-2));j>=1;j--){
      cout<<"*";
    }
   }
    cout<<endl;


}

  }
 


    

    

   

