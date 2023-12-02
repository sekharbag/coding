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
void remove(queue<int> &q)
{
    queue<int>q1;
    int count=0;
    while(q.size()>0)
    {
        if(count%2!=0)
        q1.push(q.front());
        q.pop();
        count++;
    }
    while(q1.size()>0)
    {
        q.push(q1.front());
        q1.pop();
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
     remove(q);
     cout<<endl;
    display(q);

}