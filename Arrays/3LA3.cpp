#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the missing number
// TC ==O(N)
// SC==O(1)

void test()
{
    int n;
    cin >> n;

    vector<int> v1;

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        sum += x;
    }

    int sum2 = n * (n + 1) / 2;

    cout << sum2 - sum;
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