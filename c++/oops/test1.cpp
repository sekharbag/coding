#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    private:
    int l;
    int b;
    int h;
    public:
    Box()
    {
        this->b=0;
        this->h=0;
        this->l=0;
    }
    Box(int length,int breath,int height)
    {
        this->l=length;
        this->h=height;
        this->b=breath;
    }
    Box(Box &B)
    {
        this->l=B.l;
        this->h=B.h;
        this->b=B.b;
        cout<<this->l;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth ()
    {
        return b;
        ;
    }
    int getHeight ()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l*b*h;
    }


};





int main()
{
Box b(10,10,10);


cout<<b.CalculateVolume();
}