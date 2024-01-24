#include <bits/stdc++.h>
using namespace std;

// Multiple recursive calls

// Find the nth fibonacci number

// TC ==> O(2 to the power n)  exponential in nature

int fibo(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

void test()
{

    int n;
    cin >> n;
    cout << fibo(n);
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