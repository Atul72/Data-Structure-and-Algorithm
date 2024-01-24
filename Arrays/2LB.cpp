#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Left rotate array by D places

void test()
{
    int n, d;
    cin >> n >> d;

    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Code here

    // Time complexity O(N+N)
    // Space complexity O(N)

    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(v1[i]);
    }

    for (int i = 0; i < n - d; i++)
    {
        v1[i] = v1[i + d];
    }

    for (int i = 0; i < temp.size(); i++)
    {
        v1[n - d] = temp[i];
        d--;
    }

    // Ends here

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