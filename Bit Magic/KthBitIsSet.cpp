#include <bits/stdc++.h>
using namespace std;

// Method 1

// void kthBit(int n, int k)
// {
//     if ((n & (1 << (k - 1))) != 0)
//     {
//         cout << "Yes";
//     }
//     else
//     {
//         cout << "No";
//     }
// }

// Method 2

void kthBit(int n, int k)
{
    if (((n >> (k - 1)) & 1) != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x, k;
    cin >> x >> k;
    kthBit(x, k);

    return 0;
}