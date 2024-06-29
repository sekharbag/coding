#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "element which we need" << endl;
    cin >> target;
    int low = 0;
    int hi = n - 1;
    int mid;
    bool flag = false;
    while (hi >= low)
    {
        mid = (hi + low) / 2;
        if (nums[mid] == target)
        {
            if (nums[mid - 1] == target)
            {
                hi = mid - 1;
            }
            else
            {
                cout << mid;
                break;
            }
        }
        else if (nums[mid] > target)
        {
            hi = mid - 1;
        }
        else
            low = mid + 1;
    }
}

// 1 2 2 3 3 3 3 3 4 4 5 8 9