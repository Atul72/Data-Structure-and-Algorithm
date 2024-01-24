#include <bits/stdc++.h>
using namespace std;

// Print all subsequences  ==> You will find this term a lot in recusion and in dynamic programming.

// Subsequences => A contigous/ non-contigous,which follows the order.

// TC ==> 2 pow n * n(for printing the array)
// SC ==> O(n)
// For n numbers there are 2 pow n subsequences

void printSubSequence(int i, int n, vector<int> v, vector<int> &v1)
{
    if (i >= n)
    {
        for (auto &value : v1)
            cout << value << " ";

        cout << endl;
        return;
    }
    v1.push_back(v[i]);
    printSubSequence(i + 1, n, v, v1);
    v1.pop_back();
    printSubSequence(i + 1, n, v, v1);
}

void test()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v1;
    printSubSequence(0, n, v, v1);
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