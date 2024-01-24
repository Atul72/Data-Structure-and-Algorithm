#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// longest subarray with sum k
// Brute
// TC ==> O(n3) ==> O(n2)
// SC ==> O(1)

void test()
{
    int n, s;
    cin >> n >> s;
    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Code here

    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + v1[j];
            if (sum == s)
            {
                length = max(length, j - i + 1);
            }
            else if (sum > s)
            {
                break;
            }
        }
    }

    cout << length;

    // ends here
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