#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Linear search of first occurence of a given number

// Time complexity ==>O(N)
// Space complexity ==> O(1)

void test()
{
    int n, num;
    cin >> n >> num;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Code here
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == num)
        {
            index = i;
            break;
        }
    }

    cout << index;

    // ends here
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