#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        arr.push_back(el);
    }

    // pre-Compute

    // int hash[13] = {0};
    vector<int> hashh(100000000, 0);
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << hashh[number] << endl;
    }

    return 0;
}