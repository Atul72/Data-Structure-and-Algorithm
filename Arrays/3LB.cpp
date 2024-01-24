#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void test()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
                count = 0;
            }
        }
    }
    cout << max;
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