#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Single element in sorted array
// TC ==> log2(N)

int singleEl(vector<int> arr, int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
            return arr[mid];

        // Left part
        if ((mid % 2 == 1 && arr[mid - 1] == arr[mid]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
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
    cout << singleEl(v1, n);
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