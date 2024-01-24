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

    // Better

    int max = 0;
    // O(N)
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > max)
        {
            max = v1[i];
        }
    }

    int slargest = -1;
    // O(N)
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > slargest && v1[i] < max)
        {
            slargest = v1[i];
        }
    }
    // Total time complexity O(N+N) ==> O(2N)

    cout << slargest;
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