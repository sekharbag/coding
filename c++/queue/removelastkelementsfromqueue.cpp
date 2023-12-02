#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int main()
{
    int k=4;
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    int x=q.size();
    int count =0;
    while(count!=x-k)
    {
       q.push(q.front());
        q.pop();
        count++;
    }
    while(count!=x)
    {
        q.pop();
        count++;
    }
   while(q.size()>0) {cout<<q.front()<<" "; q.pop();}
}