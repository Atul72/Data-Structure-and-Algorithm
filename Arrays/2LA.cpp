#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int a = v1[0];

    // Time complexity O(N)
    // Space complexity O(1)

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            v1[i] = v1[i + 1];
        }
        else
        {
            v1[i] = a;
        }
    }

    for (auto &value : v1)
    {
        cout << value << " ";
    }
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