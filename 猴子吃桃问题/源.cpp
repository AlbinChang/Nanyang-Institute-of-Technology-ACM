#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int n;
		cin >> n;
		int sum = 1;
		for (int i = n; i >= 1; i--)
		{
			sum = sum * 2 + 2;
		}
		cout << sum << endl;
	}
}