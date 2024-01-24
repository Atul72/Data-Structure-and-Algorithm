#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Search Insert Position

int l_b(vector<int> arr, int n, int low, int high, int ans, int x)
{

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

void test()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << l_b(v1, n, 0, n - 1, n, m);
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