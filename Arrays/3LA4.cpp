#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the missing number
// Using XOR
// TC ==O(N)
// SC==O(1)

void test()
{
    int n;
    cin >> n;

    vector<int> v1;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ v1[i];
        xor1 = xor1 ^ (i + 1);
    }

    int ans = xor1 ^ xor2;
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