#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the first and last occurences in the array

int l_b(vector<int> arr, int low, int high, int x)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int u_b(vector<int> arr, int low, int high, int x)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] <= x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

void test()
{
    int n, x;
    cin >> n >> x;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int lower_bound = l_b(v1, 0, n - 1, x);

    if (lower_bound == n || v1[lower_bound] != x)
    {
        cout << -1 << " " << -1;
        return;
    }
    int upper_bound = u_b(v1, 0, n - 1, x);

    cout << lower_bound << " " << upper_bound;
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