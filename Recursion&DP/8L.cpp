#include <bits/stdc++.h>
using namespace std;

void f(int ind, int target, vector<int> &temp, vector<int> v, int n)
{
    if (ind == n)
    {
        if (target == 0)
        {
            for (auto &value : temp)
                cout << value << " ";
            cout << endl;
        }
        else
            return;
    }

    if (v[ind] <= target)
    {
        temp.push_back(v[ind]);
        f(ind, target - v[ind], temp, v, n);
        temp.pop_back();
    }

    f(ind + 1, target, temp, v, n);
}

void test()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    vector<int> temp;
    for (auto &value : v)
        cin >> value;

    f(0, t, temp, v, n);
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