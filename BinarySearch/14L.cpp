#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the smallest divisor

int func(vector<int> &arr, int m, int l)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += ceil((double)arr[i] / (double)m);
    }
    if (sum <= l)
        return 1;
    else
        return 0;
}

int func2(vector<int> &arr, int l)
{
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while (low <= high)

    {
        int mid = (low + high) / 2;
        int chk = func(arr, mid, l);

        if (chk == 1)
        {
            high = mid - 1;
            ans = mid;
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
    int n, l;
    cin >> n >> l;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cout << func2(v1, l);
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