#include <bits/stdc++.h>
using namespace std;

// Selection sort
// Select minimums and sort
// n+n-1+n-2+n-3+n-4+...+2+1 => n*(n+1)/2 => O(n pow 2)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 6;

    int arr[n] = {13, 46, 24, 52, 20, 9};

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}