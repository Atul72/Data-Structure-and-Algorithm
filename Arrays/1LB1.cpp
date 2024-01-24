#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Second Largest element in an array

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Brute

    sort(v1.begin(), v1.end()); // O(NlogN)

    int max = v1[n - 1];

    // In worst case O(N)

    for (int i = n - 2; i >= 0; i--)
    {
        if (v1[i] != max)
        {
            cout << v1[i];
            break;
        }
    }

    // Total time complexity O(NlogN+N)
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