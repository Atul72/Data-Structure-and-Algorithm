#include <bits/stdc++.h>
using namespace std;
#define ll long long;

// Print all subsequences of string using recursion

int subsequences(string str, vector<string> output)
{
    if (str.length() == 0)
    {
        output[0] = "";
        return 1;
    }
    int smallerOutputSize = subsequences(str.substr(1), output);
    for (int i = 0; i < smallerOutputSize; i++)
    {
        output[i + smallerOutputSize] = str[0] + output[i];
    }
}

void test()
{
    vector<string> output;
    int outputSize = subsequences("abc", output);
    for (auto &value : output)
    {
        cout << value << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     test();
    // }
    test();

    return 0;
}