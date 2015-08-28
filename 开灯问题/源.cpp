#include <iostream>
using namespace std;

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		bool* lights = new bool[n + 1];
		for (int i = 1; i <= n; i++)
			lights[i] = true;

		for (int i = 2; i <= k; i++)
		{
			for (int index = i; index <= n; index++)
			{
				if ( index%i == 0)
				{
					lights[index] = !lights[index];
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (lights[i])
				cout << i << " ";
		}
		cout << endl;
		delete[] lights;
	}
}