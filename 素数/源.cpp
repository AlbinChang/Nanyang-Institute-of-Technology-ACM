#include <iostream>
using namespace std;


bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	for (int i = 2; i <= n / i; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int N;
	cin >> N;
	int n;
	while (N--)
	{
		cin >> n;
		for (int i = 0;; i++)
		{
			if (isPrime(i + n))
			{
				cout << i + n << endl;
				break;
			}				
			else if (isPrime(n - i))
			{
				cout << n - i << endl;
				break;
			}
				
		}
	}
}