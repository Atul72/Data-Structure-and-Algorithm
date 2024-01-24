#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void test()
{
    int n;
    cin >> n;
    // vector<int> v1(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v1[i];
    // }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto &it : mp)
    {
        if (it.second == 1)
        {
            cout << it.first;
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