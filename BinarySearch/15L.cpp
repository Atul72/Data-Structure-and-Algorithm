#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int findDays(vector<int> &weights, int cap)
{
    int load = 0;
    int days = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (load + weights[i] > cap)
        {
            days += 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }

    return days;
}

int bs(vector<int> arr, int d)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int days = findDays(arr, mid);

        if (days <= d)
        {

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

void test()
{
    int n, d;
    cin >> n >> d;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int ans = bs(v1, d);
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