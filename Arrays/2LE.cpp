#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Union of two sorted array

// Brute ==> use set to take unique elements from both the arrays
// then insert it to a temp array
// TC -->O(n1 log n + n2 log n) + O(n1+n2)
// SC -->O(n1+n2) <- for set O(n1+n2) for print the answer

// Better ==> TC=> O(n1+n2)
// SC ==> for printing the array ==> O(n1+n2)

// Optimal ==> Next file

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

    for (int i = 0; i < n; i++)
    {
        if (u.empty())
        {
            u.push_back(v1[i]);
        }
        else if (u.front() != v1[i])
        {
            u.push_back(v1[i]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        bool p = true;
        for (int j = 0; j < u.size(); j++)
        {
            if (v2[i] == u[j])
            {
                p = false;
            }
        }
        if (p == true)
        {
            u.push_back(v2[i]);
        }
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