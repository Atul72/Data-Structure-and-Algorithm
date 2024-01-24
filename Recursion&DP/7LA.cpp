#include <bits/stdc++.h>
using namespace std;

// Print all the subsequences whose sum is k

void printS(int i, vector<int> &v1, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        if (s == sum)
        {
            for (auto value : v1)
            {
                cout << value << " ";
            }
            cout << endl;
        }

        return;
    }

    v1.push_back(arr[i]);
    s = s + arr[i];

    printS(i + 1, v1, s, sum, arr, n);

    s = s - arr[i];
    v1.pop_back();

    printS(i + 1, v1, s, sum, arr, n);
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