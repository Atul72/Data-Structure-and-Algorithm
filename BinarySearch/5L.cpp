#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Search in rotated sorted array [Duplicates]
// TC==> O(log2(N))  ==>Average
// Worst==> If there are many duplicates then you keep shrinking
// O(n/2)
// Note ==> If you do the question of duplicates try to do first for unique and then for dplicates

bool bs(vector<int> arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
            return true;

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high++;
            continue;
        }
        // Left sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // Right sorted
        else
        {
            if (arr[mid] <= k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
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

    if (bs(v1, n, k))
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not Found" << endl;
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