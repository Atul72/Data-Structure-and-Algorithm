#include <iostream>
using namespace std;

int main()
{
    // celcius to fahrenheit calculator
    float n;
    cout << "Enter the number " << endl;
    cin >> n;
    float i = 0;
    while (i <= n)
    {
        cout << "Celcius = " << i << "(C) fahrenheit = " << 
        ((i * 9 / 5) + 32) << 
        "(F)" << endl;
        i = i + 1;
    }

    return 0;
}