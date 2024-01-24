#include <iostream>
using namespace std;

int main()
{

	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < N; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
	cout << arr[0];

	return 0;
}