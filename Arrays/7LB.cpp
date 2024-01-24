#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int majorityElement(vector<int> &arr, int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            el = arr[i];
            cnt++;
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
            cnt--;
    }

    int cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            cnt1++;
    }

    if (cnt1 > n / 2)
        return el;
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