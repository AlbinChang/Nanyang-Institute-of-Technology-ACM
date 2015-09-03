#include <iostream>
using namespace std;

int main()
{
	int num;
	int N;
	long long int n;
	cin >> N;
	while (N--)
	{
		cin >> n;
		num = 471;
		if (n > 1)
			cout << (n - 1) << num << endl;
		else
			cout << num << endl;
	}
}