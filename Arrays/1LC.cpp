#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Check if array is sorted

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // O(N2)

    // int isSorted = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v1[j] < v1[i])
    //         {
    //             isSorted = -1;
    //         }
    //     }
    // }
    // if (isSorted == -1)
    // {
    //     cout << "Not Sorted";
    // }
    // else
    // {
    //     cout << "Sorted";
    // }

    // O(N)
    int isSorted = 1;
    for (int i = 1; i < n; i++)
    {
        if (v1[i] >= v1[i - 1])
        {
            continue;
        }
        else
        {
            isSorted = -1;
        }
    }

    if (isSorted == -1)
    {
        cout << "Not Sorted";
    }
    else
    {
        cout << "Sorted";
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