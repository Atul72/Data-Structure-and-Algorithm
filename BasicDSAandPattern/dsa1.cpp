#include <iostream>
using namespace std;

int facii(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * facii(n - 1);
}

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;

    cout << "The factorial of " << a << " is " << facii(a);

    return 0;
}