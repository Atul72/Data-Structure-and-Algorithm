#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Remove duplicates in place of sorted array

// Brute,Time complexity ==> O(NlogN+N) space complexity=== O(N)

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    set<int> s1;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        s1.insert(v1[i]);
    }

    int index = 0;
    for (auto &it : s1)
    {
        v1[index] = it;
        index++;
    }
    cout << index;
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