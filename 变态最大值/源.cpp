#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	int a[100000];
	while (cin >> n)
	{
		int max = 0;
		int min = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i <= (n - 1) / 6; i++)
			for (int j = 0; j < 3 && (6 * i + j) < n; j++)
			{
				if (a[6 * i + j] > max)
					max = a[6 * i + j];
			}
		for (int i = 0; i <= (n - 1) / 6; i++)
		{
			int temp_min = INT_MAX;
			for (int j = 0; j < 3 && (3 * (i * 2 + 1) + j) < n; j++)
			{
				if (a[3 * (i * 2 + 1) + j] < temp_min)
					temp_min = a[3 * (i * 2 + 1) + j];
			}
			if (temp_min > min && temp_min!=INT_MAX)
				min = temp_min;
		}
		if (max > min)
			cout << max << endl;
		else
			cout << min << endl;
	}
}