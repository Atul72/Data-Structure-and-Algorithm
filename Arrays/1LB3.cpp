#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Second Largest element in an array

// Optimal

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Best

    // Time complexity O(N)

    int largest = v1[0];
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] > largest)
        {
            slargest = largest;
            largest = v1[i];
        }
        else if (v1[i] > slargest && v1[i] < largest)
        {
            slargest = v1[i];
        }
    }
    cout << slargest << endl;
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