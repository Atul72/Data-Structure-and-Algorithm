#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Find the missing number
// Brute force solution ==> TC O(N*N)
// Space complexity ==> O(1)

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

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (i == v1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
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