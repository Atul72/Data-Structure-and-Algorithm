#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Union of two sorted array

// Optimal ==> Two pointer apporach
// Time complexity==> O(n1+n2)
// Space complexity ==> O(n1+n2)  for printing the answer

void test()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    // Code here
    vector<int> u;
    int i = 0, j = 0;
    while (i < n & j < m)
    {
        if (v1[i] <= v2[j])
        {
            if (u.size() == 0 || u.back() != v1[i])
            {
                u.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (u.size() == 0 || u.back() != v2[j])
            {
                u.push_back(v2[j]);
            }
            j++;
        }
    }

    while (j < m)
    {
        if (u.size() == 0 || u.back() != v2[j])
        {
            u.push_back(v2[j]);
        }
        j++;
    }
    while (i < n)
    {
        if (u.size() == 0 || u.back() != v1[i])
        {
            u.push_back(v1[i]);
        }
        i++;
    }
    // ends here

    for (auto &value : u)
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