#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Time complexity ==> O(log base 2 N)

// Do recursive apporach later

// void l_b(vector<int> arr, int n, int low, int high, int ans, int x)
// {
//     if (low > high)
//     {
//         cout << ans << endl;
//         return;
//     }

//     int mid = low + high / 2;

//     if (arr[mid] >= x)
//     {
//         ans = mid;
//         l_b(arr, n, low, mid - 1, ans, x);
//     }
//     else if (arr[mid] <= x)
//     {
//         l_b(arr, n, mid + 1, high, ans, x);
//     }
// }

int l_b(vector<int> arr, int n, int low, int high, int ans, int x)
{

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
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

    l_b(v1, n, 0, n - 1, n, 3);
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