#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find out how many times the array has been rotated [Unique]
// TC ==>O(log2(N))

int min(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = low + high / 2;

        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }
        // if left part sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        // If right part is sorted
        else if (arr[mid] <= arr[high])
        {
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[low];
            }
            high = mid - 1;
        }
    }
    return index;
}

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << min(v1, n);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        test();
    }

    return 0;
}