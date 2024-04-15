#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void heapify(vector<int> &v)
{
    int n = v.size() - 1;
    int size = v.size() - 1;
    int i = 0;
    if (n % 2 == 0)
    {
        i = n - (n / 2);
    }
    else
    {
        i = n - ((n / 2) + 1);
    }
    while (i > 0)
    {
        int j = i;
        while (true)
        {
            int left = (2 * j);
            int right = (2 * j + 1);
            if (left <= v.size())
            {
                int min_ele;
                if (right <= v.size())
                {
                    min_ele = min(v[left], v[right]);
                    if (v[left] == min_ele && v[left] < v[j])
                    {
                        swap(v[j], v[left]);
                        j = left;
                    }
                    else if (v[right] == min_ele && v[right] < v[j])
                    {
                        swap(v[j], v[right]);
                        j = right;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (v[j] > v[left])
                    {
                        swap(v[j], v[left]);
                        j = left;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
        i--;
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(10);
    v.push_back(2);
    v.push_back(14);
    v.push_back(11);
    v.push_back(1);
    v.push_back(4);
    v.push_back(-1);
    heapify(v);
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}