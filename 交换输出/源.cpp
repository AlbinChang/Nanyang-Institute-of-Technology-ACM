#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
	int a[100];
	int n;
	while (true)
	{
		cin >> n;
		if (n == 0)
			return 0;
		int min = INT_MAX;
		int min_index;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < min)
			{
				min = a[i];
				min_index = i;
			}
		}
		swap(a[0], a[min_index]);
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}