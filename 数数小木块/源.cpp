#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int n;
	while (T--)
	{
		cin >> n;
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i*(i + 1) / 2;
		}
		cout << sum << endl;
	}
}