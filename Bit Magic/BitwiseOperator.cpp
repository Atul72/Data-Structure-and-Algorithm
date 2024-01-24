#include <bits/stdc++.h>
using namespace std;

// &(and) operator
// |(or) operator
// ^(xor) operator

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x = 3;
    int y = 6;

    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;

    return 0;
}