#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter your basic salary";
    cin >> a;
    int b = (a / 100) * 25; // DA is 25%
    int c = (a / 100) * 15; // HRA ia 15%
    int d = (a / 100) * 10; // provident fund is 10% (BS + HRA + DA)
    cout << "the net salary of employee is" << ((a + b + c) - d);

    return 0;
}