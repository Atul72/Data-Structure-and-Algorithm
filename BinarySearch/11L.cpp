#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the nth root of an integer
// TC==> O(log M*N)

// long long powf(long long m, long long n)
// {
//     return pow(m, n);
// }

// int func(long long n, long long m)
// {
//     long long low = 1;
//     long long high = m;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (powf(mid, n) == m)
//             return mid;

//         if (powf(mid, n) > m)
//         {
//             high = mid - 1;
//         }
//         if (powf(mid, n) < m)
//             low = mid + 1;
//     }
//     return -1;
// }

int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int nthRoot(long long n, long long m)
{
    long long low = 1;
    long long high = m;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1)
            return mid;

        if (midN == 2)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

void test()
{
    long long n, m;
    cin >> n >> m;

    int ans = nthRoot(n, m);
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