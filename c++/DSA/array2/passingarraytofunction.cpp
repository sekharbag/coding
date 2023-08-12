#include<iostream>
using namespace std;
void display(int arr[],int size)
{
for(int i=0;i<=size-1;i++){
cout<<arr[i]<<" ";}
cout<<endl;
}
void change(int b[],int size){
    b[0]=100;
}
int main()
{
   int arr[]={1,4,2,7,46};
   int size=sizeof(arr)/sizeof(arr[0]);
   display(arr, size);
   //while we are calling function we are passing the address of the array 
   //thats why we can access and update the values of an array in functions too
   change(arr, size);
   display(arr, size);


}