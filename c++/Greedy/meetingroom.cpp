#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int noofrooms(vector<vector<int>> &v)
{
     priority_queue<int,vector<int>,greater<int>> pq;
    int count = 1;
    int starttime = v[0][0];
    pq.push(v[0][1]);
    for (int i = 1; i < v.size(); i++)
    {
        starttime = v[i][0];
        if (starttime <= pq.top())
        {
            count++;
        }
         else{
        pq.pop();
        }
        pq.push( v[i][1]);
       
    }
    return count;
}
int main()
{
    vector<vector<int>> v;
    v.push_back({1, 10});
    v.push_back({2, 7});
    v.push_back({3, 19});
     v.push_back({8, 12});
    v.push_back({10, 20});
    v.push_back({11, 30});
    v.push_back({20,25});
     v.push_back({26,27});
     v.push_back({31,40});

    sort(v.begin(), v.end());
    cout << noofrooms(v);
}