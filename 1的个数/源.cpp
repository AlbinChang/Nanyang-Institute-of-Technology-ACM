#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	while (true)
	{
		int M;
		cin >> M;
		int count = 0;
		for (int i = 0; i < 15; i++)
		{
			if (M % 2 == 1)
			{
				count++;
			}
			M = M >> 1;
		}
		cout << count << endl;
		if (--N == 0)
			break;
	}
}