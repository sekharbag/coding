#include<iostream>
using namespace std;
class book{
public:
char name;
int price;
int nop;
int countbooks(int p)    
{
    if(this->price<p)return 1;
    else return 0;
}
bool isbookprsent(char book)
{
if(this->name==book)return true;
else return false;
}
};
int main()
{
 book harryprter;
   harryprter.name='H';
   harryprter.price=1000;
   harryprter.nop=999;
   cout<<harryprter.isbookprsent('H')<<endl;
   cout<<harryprter.countbooks(100000)<<endl;
    }