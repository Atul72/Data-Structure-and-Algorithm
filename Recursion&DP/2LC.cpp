#include <bits/stdc++.h>
using namespace std;

// Print linearly from N to 1

// void printNumber(int N)
// {
//     if (N == 0)
//         return;

//     cout << N << endl;

//     printNumber(N - 1);
// }

void printNumber(int i, int N)
{
    if (i > N)
        return;

    printNumber(i + 1, N);
    cout << i << endl;
}

void test()
{
    int N;
    cin >> N;
    int i = 1;
    printNumber(i, N);
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