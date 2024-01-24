#include <bits/stdc++.h>
using namespace std;

// Check if stirng is palindrome or not
// TC ==> O(N)
// SC ==> O(N/2)   // Stack space

bool isPalindrome(string s, int i, int n)
{
    if (i >= n / 2)
        return true;

    if (s[i] != s[n - i - 1])
        return false;

    return isPalindrome(s, i + 1, n);
}

void test()
{
    string s;
    cin >> s;

    int ans = isPalindrome(s, 0, s.length());

    if (ans == 1)
    {
        cout << "This string is palindrome";
    }
    else
        cout << "Not a palindrome";
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