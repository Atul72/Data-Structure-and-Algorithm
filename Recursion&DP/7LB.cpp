#include <bits/stdc++.h>
using namespace std;

// Print any subsequences whose sum is k

bool printS(int i, vector<int> &v1, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        // Condition satisfied
        if (s == sum)
        {
            for (auto value : v1)
            {
                cout << value << " ";
            }
            cout << endl;

            return true;
        }

        // Condition not satisfied
        return false;
    }

    v1.push_back(arr[i]);
    s = s + arr[i];

    if (printS(i + 1, v1, s, sum, arr, n) == true)
        return true;

    s = s - arr[i];
    v1.pop_back();

    // Not Pick
    if (printS(i + 1, v1, s, sum, arr, n) == true)
        return true;

    return false;
}

void test()
{
    int arr[] = {1, 2, 1};
    vector<int> v1;
    int n = 3;
    int sum = 2;

    printS(0, v1, 0, sum, arr, n);
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