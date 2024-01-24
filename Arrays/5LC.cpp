#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Two Pointer apporach for the first type

// O(N)+O(N log N ) <== for sorting

string twoSum(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == k)
        {
            return "Yes";
        }
        if (arr[left] + arr[right] > k)
        {
            right -= 1;
        }
        if (arr[left] + arr[right] < k)
        {
            left += 1;
        }
    }
    return "No";
}

void test()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cout << twoSum(v1, n, k);
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