#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Largest element in an array

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // TC O(NlogN) Brute
    sort(v1.begin(), v1.end());

    cout << v1[n - 1];

    // Better

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] > max)
        {
            max = v1[i];
        }
    }
    cout << max << endl;

    // TC ==> O(N)
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