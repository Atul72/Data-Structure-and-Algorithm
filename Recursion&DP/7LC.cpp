#include <bits/stdc++.h>
using namespace std;

// Print any subsequences whose sum is k
// TC ==> 2 pow n

int printS(int i, int s, int sum, int arr[], int n)
{
    // Condition not satisfied
    // Strictly done if array contain positives only
    if (s > sum)
        return 0;

    if (i == n)
    {
        // Condition satisfied
        if (s == sum)
            return 1;
        // Condition not satisfied
        else
            return 0;
    }

    s = s + arr[i];

    int l = printS(i + 1, s, sum, arr, n);

    s = s - arr[i];

    // Not Pick
    int r = printS(i + 1, s, sum, arr, n);

    return l + r;
}

void test()
{
    int arr[] = {1, 2, 1};

    int n = 3;
    int sum = 2;

    cout << printS(0, 0, sum, arr, n);
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