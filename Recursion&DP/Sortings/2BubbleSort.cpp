#include <bits/stdc++.h>
using namespace std;

// Note ==> If you run till the index to which element is not present then it will throw the runtime error.
// TC => Same as selection sort 0(n2) WORST and AVERAGeE
// In best ==> TC ==> O(n)  => If array is sorted
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 6;

    int arr[n] = {13, 46, 24, 52, 20, 9};

    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}