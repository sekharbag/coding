#include<iostream>
#include<string>
using namespace std;

class complexnumber{
    public:
    int real;
    int imaganiry;
   
    friend complexnumber operator +(complexnumber &a1,complexnumber&a2);


};
complexnumber operator +(complexnumber &a1,complexnumber&a2)
{
       complexnumber a3;
        a3.imaganiry=a1.imaganiry+a2.imaganiry;
        a3.real=a1.real+a2.real;
        return a3;
}

int main()
{
complexnumber a1;
a1.imaganiry=10;
a1.real=20;
complexnumber a2;
a2.imaganiry=12;
a2.real=23;

// a1.add(a2);
// cout<<endl;
complexnumber a3=a1+a2;

cout<<a3.real<<endl;
cout<<a3.imaganiry<<endl;

}