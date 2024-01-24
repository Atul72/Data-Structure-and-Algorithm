#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x = 3;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;

    int y = 4;
    cout << (x << y) << endl;
    cout << (x * pow(y, 2)) << endl;

    return 0;
}