#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isPrime(int number)
{
	if (number == 0 || number == 1)
		return false;
	for (int i = 2; i <= sqrt(number); i++)
		if (number%i == 0)
			return false;
	return true;
}
int main()
{
	int M = 0;
	int N = 0;
	int a[1000] = { 0 };
	int sum = 0;
	while (cin>>M)
	{
		while (cin>>N)
		{
			sum = 0;
			for (int i = 0; i < N; i++)
			{
				cin >> a[i];
				if (isPrime(a[i]))
					sum += a[i];
			}
			cout << sum << endl;

			if (--M == 0)
				break;
		}
	}
}