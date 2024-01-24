#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Move zeroes to end

// Brute force
// Time complexity ==> O(N)+O(x)+O(N-x) ==> O(2N)  here x is non zero number
// space complexity ==>O(x)==> O(N) in worst case where all numbers are non zero

void test()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    // Code here
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != 0)
            temp.push_back(v1[i]);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        v1[i] = temp[i];
    }

    int n1 = temp.size();

    for (int i = n1; i < n; i++)
    {
        v1[i] = 0;
    }

    // ends here
    for (auto &value : v1)
    {
        cout << value << " ";
    }
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