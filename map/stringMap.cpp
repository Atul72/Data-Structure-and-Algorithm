#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string n;
    cin >> n;

    // pre-compute
    map<char, int> mpp;
    for (int i = 0; i < n.size(); i++)
    {
        mpp[n[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char s;
        cin >> s;
        cout << mpp[s] << endl;
    }

    return 0;
}