#include <bits/stdc++.h>
using namespace std;

// Print name N times using recursion

void printName(int i, int n)
{
    if (i >= n)
        return;

    cout << "atul" << endl;
    printName(i + 1, n);
}

void test()
{
    int n;
    cin >> n;
    int i = 0;

    printName(i, n);
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