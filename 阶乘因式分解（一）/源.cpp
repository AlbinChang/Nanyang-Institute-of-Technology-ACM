#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (true)
	{
		int m, n;
		cin >> n >> m;
		int count;
		if (n <= 1)
		{
			count = 0;
		}
		else
		{
			count = 0;
			for (int i = 2; i <= n; i++)
			{
				int temp = i;
				while (temp%m == 0)
				{
					count++;
					temp /= m;
				}
			}
		}
		cout << count << endl;
		if (--N == 0)
			break;
	}
}