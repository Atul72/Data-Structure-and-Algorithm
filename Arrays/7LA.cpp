#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Majority element using hashing

int majorityElement(vector<int> &arr, int n)
{

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto &value : mpp)
    {
        if (value.second > n / 2)
        {
            return value.first;
        }
    }
}

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int ans = majorityElement(v1, n);
    cout << ans;
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