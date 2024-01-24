#include <bits/stdc++.h>
using namespace std;

// Print linearly from 1 to N

// int cnt = 1;
// void printNumber(int N)
// {
//     if (cnt > N)
//         return;

//     cout << cnt << endl;
//     cnt++;
//     printNumber(N);
// }

// Using Backtracing

void printNumber(int N)
{
    if (N == 0)
        return;

    printNumber(N - 1);
    cout << N << endl;
}

void test()
{
    int N;
    cin >> N;

    printNumber(N);
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