#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Koko eating bananas
// TC ==>O(N*log(2)maxEl)

int findMax(vector<int> &arr)
{
    int max = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int func(vector<int> &arr, int hour)
{
    int totalHour = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalHour += ceil((double)arr[i] / (double)hour);
    }

    return totalHour;
}

int minHour(vector<int> &arr, int h)
{

    int low = 1, high = findMax(arr);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int totalHour = func(arr, mid);

        if (totalHour <= h)
        {
            high = mid - 1;
        }
        if (totalHour > h)
        {
            low = mid + 1;
        }
    }
    return low;
}

void test()
{
    int n, h;
    cin >> n >> h;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int ans = minHour(v1, h);
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