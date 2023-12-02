#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
        queue<int>q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.push(6);
        q.push(7);
        q.push(8);
        q.push(9);
        q.push(10);
        q.push(11);
        q.push(12);
         stack<int>st;
        int count =0;
        while(count !=q.size()/2)
        {
            q.push(q.front());
            q.pop();
            count++;
        }
        while(count!=q.size())
        {
                st.push(q.front());
                q.pop();
        }
        int x=q.size();
        while(st.size()>0 && x>0)
        {
            int count=0;
            int y=q.size();
            while(count !=x)
            {
                q.push(q.front());
                q.pop();
                count++;
            }
            q.push(st.top());
            st.pop();
            count=0;
            while(count!=(y-x))
            {
                 q.push(q.front());
                q.pop();
                count++;
            }
            x--;
        }
        while(q.size()>0)
        {
                cout<<q.front()<<" ";
                q.pop();
        }

}