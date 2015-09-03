#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		if (n == 0)
			return 0;
		int max = 0;
		int a, b;
		while (n--)
		{
			cin >> a >> b;
			if (a + b > max)
				max = a + b;
		}
		cout << max << endl;
	}
}