#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the minimum in rotated sorted array [unique]

int min(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + high / 2;

        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }
        // if left part sorted
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        // If right part is sorted
        else if (arr[mid] <= arr[high])
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
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