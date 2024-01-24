#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Print the string in reverse using recursion

void reverse(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

void test()
{
    string name = "atul";
    reverse(name, 0, name.length() - 1);
    cout << name;
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