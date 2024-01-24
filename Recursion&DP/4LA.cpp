#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v, int i, int n)
{
    if (i >= n / 2)
        return;

    swap(v[i], v[n - i - 1]);
    reverseArray(v, i + 1, n);
}

void test()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    reverseArray(v, 0, n);

    for (auto &value : v)
    {
        cout << value << " ";
    }
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