#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q)
{
     int size=q.size();
    int count=0;
    while(count!=size)
    {
      int x=q.front();
      q.pop();
      q.push(x);
      cout<<x<<" ";
      count++;
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
     display(q);
     cout<<endl;
    display(q);

}