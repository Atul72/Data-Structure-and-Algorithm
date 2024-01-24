#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the missing number
// Hashing  ==> TC O(2N)
// Space complexity O)N

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

    int hash[n + 1] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        hash[v1[i]] = 1;
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (hash[i] == 0)
        {
            cout << i;
            break;
        }
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