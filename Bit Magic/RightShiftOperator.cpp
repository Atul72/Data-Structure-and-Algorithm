#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;

    int y = 4;
    cout << (x >> y) << endl;
    cout << (int)(x / pow(2, y)) << endl;

    return 0;
}