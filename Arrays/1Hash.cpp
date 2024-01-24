#include <bits/stdc++.h>
using namespace std;
#define ll long long;

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
    int hash[20] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[v1[i]]++;
    }

    // ends here
    int min = INT32_MAX;
    int max = INT32_MIN;

    for (int i = 0; i < 20; i++)
    {
        if (hash[i] > 0)
        {
            if (hash[i] < min)
            {
                min = hash[i];
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (hash[i] > 0)
        {
            if (hash[i] > max)
            {
                max = hash[i];
            }
        }
    }

    int lf, hf;

    for (int i = 0; i < 20; i++)
    {
        if (hash[i] == min)
        {
            lf = i;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (hash[i] == max)
        {
            hf = i;
        }
    }

    cout << hf << " " << lf;
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