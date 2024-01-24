#include <bits/stdc++.h>
using namespace std;

void test() {}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[3][4];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 111, 1111, 111111}, {2, 22, 222, 222222}, {3, 33, 333, 33333}};

    // Row wise input

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12

    // Col wise input

    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }

    // 1 4 7 10
    // 2 5 8 11
    // 3 6 9 12

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}