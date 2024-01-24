#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Finding peak element in array

int peakEl(int arr[], int n)
{
    // Edge cases
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int low = 1;
    int high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((arr[mid - 1] < arr[mid]) && (arr[mid] > arr[mid + 1]))
        {
            return mid;
        }

        else if (arr[mid - 1] < arr[mid])
        {
            low = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

void test()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = peakEl(arr, n);
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