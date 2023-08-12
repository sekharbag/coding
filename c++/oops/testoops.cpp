#include <bits/stdc++.h> 

#include<iostream>

 

using namespace std;

 

class Shape

{ public:

string shapeType;

 virtual void  PrintMyType() 

 {

     cout<<"Shape is"<<endl;

 }

};

class Square:public Shape{

    public: 

    int length;

    int calculateArea()

    {

        return length*length;

 

    }

    void printMyType()

    {

        cout<<"square"<<endl;

    }

 

};

class Rectangle :public Shape{

    public:

    int length,breadth;

    int calculateArea()

    {

        return length*breadth;

    }

    void printMyType()

    {

        cout<<"rectangle"<<endl;

    }

 

};

 

int main() {

 

  Square sq;

  sq.length =5;

  sq.printMyType();

  int area= sq.calculateArea();

  cout<<area<<endl;

  Rectangle r1;

  r1.length=5;

  r1.breadth=4;

  r1.printMyType();

  int Area = r1.calculateArea();

  cout<<Area<<endl;

  return 0;

}