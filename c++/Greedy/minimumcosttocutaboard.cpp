#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue<pair<int, char>> pq;
int minimum_cost( vector<int> &v, vector<int> &h)
{
    int horizontalconter = 1;
    int verticalcounter=1;
    int cost=0;
    while(pq.size()>0)
    {
        if(pq.top().second=='v'){
            cost=cost+((horizontalconter)*pq.top().first);
            pq.pop();
            verticalcounter++;
        }
        else{
            cost=cost+((verticalcounter)*pq.top().first);
            pq.pop();
            horizontalconter++;
        }
    }
    return cost;
}
int main()
{
    int M = 6;
    int N = 4;
    vector<int> v = {2, 1, 3, 1, 4};
    vector<int> h = {4, 1, 2};
    for (int i = 0; i < v.size(); i++)
    {
        pair<int, char> p;
        p.first = v[i];
        p.second = 'v';
        pq.push(p);
    }
    for (int i = 0; i < h.size(); i++)
    {
        pair<int, char> p;
        p.first = h[i];
        p.second = 'h';
        pq.push(p);
    }
    cout<<minimum_cost(v,h);
}
