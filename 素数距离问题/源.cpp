#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isprime(int number)
{
	if (number < 2)
		return false;
	for (int i = 2; i <= number / i; i++)
		if (number%i == 0)
			return false;
	return true;
}

int main()
{
	int N = 0;
	int number = 0;
	while (cin>>N)
	{
		while (cin>>number)
		{
			if (isprime(number))
			{
				cout << number << " " << "0" << endl;
				continue;
			}
			for (int i = 1;; i++)
			{
				if (isprime(number - i))
				{
					cout << number - i << " " << i << endl;
					break;
				}
				if (isprime(number + i))
				{
					cout << number + i << " " << i << endl;
					break;
				}
			}
			if (--N == 0)
				break;
		}
	}
}