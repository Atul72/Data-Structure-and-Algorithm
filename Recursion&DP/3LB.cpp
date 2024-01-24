#include <bits/stdc++.h>
using namespace std;

// Factorial of N

// TC == O(N)
// SC == O(N)

int facii(int n)
{
    if (n == 1)
        return 1;

    return n * facii(n - 1);
}

void test()
{
    int n;
    cin >> n;

    cout << facii(n);
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