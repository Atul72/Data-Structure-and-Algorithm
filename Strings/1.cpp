#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Time complexity: O( N3 ) print substring
// Notes on simplenote

void test()
{
    string s1 = "Geeks";

    // string r = s1.substr(3, 2);

    for (int i = 0; i < s1.size() - 1; i++)
    {
        for (int j = 1; j <= s1.size() - i; j++)
        {
            cout << s1.substr(i, j) << endl;
        }
    }

    // cout << "String is: " << r;
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