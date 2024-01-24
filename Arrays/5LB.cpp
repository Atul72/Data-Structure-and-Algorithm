#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// To print the index pairs of two sum

vector<pair<int, int>> twoSum(vector<int> &v1, int n, int k)
{

    vector<pair<int, int>> vpp;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = k - v1[i];
        if (mpp.find(a) != mpp.end())
        {
            vpp.push_back({i, mpp[a]});
        }
        mpp[v1[i]] = i;
    }

    if (vpp.empty())
    {
        vpp.push_back({-1, -1});
    }

    return vpp;
}

//  To print "Yes" or "No"

string read(int n, vector<int> v1, int k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = k - v1[i];
        if (mpp.find(a) != mpp.end())
        {
            return "YES";
        }
        mpp[v1[i]] = i;
    }

    return "NO";
}

//  To print the index

pair<int, int> readIndex(int n, vector<int> v1, int k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int findInMap = k - v1[i];

        if (mpp.find(findInMap) != mpp.end())
        {
            return {i, mpp[findInMap]};
        }

        mpp[v1[i]] = i;
    }

    return {-1, -1};
}

void test()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<pair<int, int>> p = twoSum(v1, n, k);
    for (auto value : p)
    {
        cout << value.first << " " << value.second << endl;
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