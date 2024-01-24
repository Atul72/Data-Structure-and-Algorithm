#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int func(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1]))
        {
            return arr[i];
        }
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

    cout << func(v1, n);
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