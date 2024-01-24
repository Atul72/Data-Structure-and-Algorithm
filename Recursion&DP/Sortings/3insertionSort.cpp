#include <bits/stdc++.h>
using namespace std;

// Insertion sort ==> Take an element and place in its correct order.
// Worst case and average==> O(n2)
// Best case ==> O(n)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 6;

    int arr[n] = {13, 45, 24, 52, 20, 9};

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}