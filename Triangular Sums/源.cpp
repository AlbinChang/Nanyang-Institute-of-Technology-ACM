#include <iostream>
using namespace std;

int T(int n)
{
	return (n + 1)*n / 2;
}
int main()
{
	int N;
	cin >> N;
	int n = 1;
	int number;
	int sum;
	while (N)
	{
		cin >> number;
		sum = 0;
		for (int k = 1; k <= number; k++)
			sum += k*T(k + 1);
		cout << n++ << " ";
		cout << number << " ";
		cout << sum << endl;
		N--;
	}
}