#include<iostream>
#include<string>
using namespace std;

class complexnumber{
    private:
    int real;
    int imaganiry;
    public:
    void seimag(int imaginary)
    {
        this->imaganiry=imaganiry;
    }
    void setreal(int real)
    {
        this->real=real;
    }
    int getimaganiry()
    {
        return imaganiry;
    }
    int getreal()
    {
        return real;
    }
        complexnumber add(complexnumber &a1)
    {
        complexnumber a3;
     a3.imaganiry=a1.getimaganiry()+this->getimaganiry();
     a3.real=a1.real+this->real;
         return a3;
    }
 
    // complexnumber operator +(complexnumber &a1)
    // {
    //     complexnumber a3;
    //     a3.imaganiry=a1.imaganiry+this->imaganiry;
    //  a3.real=a1.real+this->real;
    //     cout<<this->imaganiry<<endl;
    //      return a3;
    // }

};


int main()
{
complexnumber a1;
complexnumber a2;
a1.seimag(10);
a1.setreal(10);
a2.seimag(10);
a2.setreal(10);

complexnumber a3=a1.add(a2);
cout<<a3.getreal();
// cout<<endl;
// complexnumber a3=a1+a2;


// cout<<a3.real<<endl;
// cout<<a3.imaganiry<<endl;

}