#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Minimum days to make M bouquets
// TC ==> O(N* log2(max-min+1))

int possible(vector<int> &arr, int day, int m, int k)
{
    int cnt = 0, b = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            b += cnt / k;
            cnt = 0;
        }
    }
    b += cnt / k;

    if (b >= m)
        return 1;
    else
        return 0;
}

int func(vector<int> &arr, int m, int k)
{
    if ((m * k) > arr.size())
        return -1;

    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int chk = possible(arr, mid, m, k);

        if (chk == 1)
        {
            high = mid - 1;
            ans = min(ans, mid);
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

void test()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int ans = func(v1, m, k);
    cout << ans;
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