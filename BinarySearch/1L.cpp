#include <bits/stdc++.h>
using namespace std;
#define ll long long;

//  Iterative code of binary search

int bs(vector<int> &arr, int n, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
    }
    return -1;
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