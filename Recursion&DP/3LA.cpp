#include <bits/stdc++.h>
using namespace std;

// Sum of first N numbers

// There are two types of recursion

// 1) Parameterised way

// int s = 0;
// void sum(int n)
// {
//     if (n < 1)
//     {
//         cout << s;
//         return;
//     }

//     s += n;
//     sum(n - 1);
// }

// 2) Functional way

int sum(int n)
{
    if (n < 1)
        return 0;

    return n + sum(n - 1);
}

void test()
{
    int n;
    cin >> n;
    // sum(n);
    cout << sum(n);
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