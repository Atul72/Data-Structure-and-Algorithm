#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Remove duplicates in place of sorted array
// Optimal solution, Use two pointer apporach
// Time complexity O(N)
// space complexity O(1)

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    set<int> s1;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        s1.insert(v1[i]);
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (v1[j] != v1[i])
        {
            v1[i + 1] = v1[j];
            i++;
        }
    }
    cout << i + 1;
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