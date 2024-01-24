#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Move zeroes to end

// Optimal solution using two ponter apporach
// Time complexity ==> O(x)+O(N-x)==>O(N) where x is till where we find our first zero and then iterate next to it
// Space complexity ==> O(1)

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    // Code here
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (v1[i] != 0)
        {
            swap(v1[i], v1[j]);
            j++;
        }
    }

    // ends here
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