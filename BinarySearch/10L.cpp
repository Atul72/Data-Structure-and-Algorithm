#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the square root of a given number
// TC==> O(log2(N))

int func(int n)
{
    int low = 1, high = n;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // cout << mid << endl;
        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }

        if (mid * mid > n)
            high = mid - 1;
    }
    return ans;
}

void test()
{
    int n;
    cin >> n;

    cout << func(n);
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