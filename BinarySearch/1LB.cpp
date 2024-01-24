#include <bits/stdc++.h>
using namespace std;
#define ll long long;

//  Recursive code of binary search
// Time complexity==>> O(log base2 N)

int bs(vector<int> &arr, int n, int low, int high, int target)
{
    int mid = (low + high) / 2;

    if (low > high)
        return -1;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        bs(arr, n, low, mid - 1, target);
    else if (arr[mid] < target)
        bs(arr, n, mid + 1, high, target);
}

void test()
{
    int n, target;
    cin >> n >> target;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << bs(v1, n, 0, n - 1, target);
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