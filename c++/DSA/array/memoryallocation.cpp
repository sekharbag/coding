#include<iostream>
using namespace std;
int main()
{
int arr[7];
cout<<&arr<<endl;
cout<<&arr[0]<<endl;
cout<<&arr[1]<<endl;
cout<<&arr[2]<<endl;
cout<<&arr[3]<<endl;
cout<<&arr[4]<<endl;
cout<<&arr[5]<<endl;
//0x61fef4
//0x61fef8
//0x61fefc
//0x61ff00
//0x61ff04
//0x61ff08
}