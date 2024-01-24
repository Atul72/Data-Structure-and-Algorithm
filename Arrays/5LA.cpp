#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Two sum problem (Naive apporach)
// O(N2)

string twoSum(vector<int> v1, int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v1[i] + v1[j] == k)
            {
                return "Yes";
            }
        }
    }
    return "No";
}

void test()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << twoSum(v1, n, k);
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