#include <iostream>
#include <string>
using namespace std;


long factorial(long number)
{
	long sum = 1;
	for (long i = 1; i <= number; i += 2)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	long N = 0;
	while (cin>>N)
	{
		long number;
		while (cin>>number)
		{
			long sum = 0;
			for (long i = 1; i <= number; i++)
			{
				sum += factorial(i);
			}
			cout << sum << endl;
			if (--N == 0)
				break;
		}
	}
}